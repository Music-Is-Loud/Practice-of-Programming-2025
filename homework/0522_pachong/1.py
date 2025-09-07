#用pyppeteer + 正则表达式爬取股票网页
import asyncio  # Python 3.6之后自带的协程库
import pyppeteer as pyp
import requests
import re
def getHtml(url):
	import asyncio
	import pyppeteer as pyp
	async def antiAntiCrawler(page):
		# 为page添加反反爬虫手段
		await page.setUserAgent('Mozilla/5.0 (Windows NT 6.1; Win64; x64) \
	    					AppleWebKit/537.36 (KHTML, like Gecko) \
	    					Chrome/78.0.3904.70 Safari/537.36')
		await page.evaluateOnNewDocument(
			'() =>{ Object.defineProperties(navigator, \
			{ webdriver:{ get: () => false } }) }')
	async def asGetHtml(url):
		browser = await pyp.launch(
			headless=True)
		page = await browser.newPage()
		await antiAntiCrawler(page)
		await page.goto(url)
		text = await page.content()
		await browser.close()
		return text
	loop = asyncio.new_event_loop()
	asyncio.set_event_loop(loop)
	return  loop.run_until_complete(asGetHtml(url))
with open('words.txt', 'r', encoding='utf-8') as f:
    words = [line.strip() for line in f]
with open('result.txt', 'w', encoding='utf-8') as out_file:
    for word in words:
        url = f"https://cn.bing.com/dict/{word}"
        html = getHtml(url)
#html = getHtml("https://cn.bing.com/dict/new")#pypeteer版
#print(html[0]) #下一步编程前可以先打印出来，将打印结果拷贝粘贴到记事本，查找关心的数据如12.17在哪里
        
        synoid = r'<div id="synoid"[^>]*>(.*?)</div>\s*</div>'
        
        '''
        <div id="synoid"之后匹配[^>]任意非>字符，*重复前面的任意非>字符直到匹配到>
        这句话匹配了<div id="synoid" style="display:block;">
        接着（.*?)非贪婪捕获，匹配任意字符直到遇到后续字符</div>\s*</div>，加上DOALL还能匹配换行符，这部分会被摘出来
        \s*每个之间允许有空白字符
        '''
        
        synoid_block = re.search(synoid,html,re.DOTALL)
        ans=[]
        if synoid_block:
            rt=r'<span class="p1-4 b_alink">([^<]+)</span>'
            ans=re.findall(rt,synoid_block.group(1))
        out_file.write(f"${word}")
        out_file.write(f"\n")
        for answord in ans:
            out_file.write(f"{answord}\n")
        
        pict = r'href="(\/images\/search\?q=[^"]+)"'
        picture = re.findall(pict,html)
        if picture:
            picture_url="https://bing.com/"+picture[0]
            print(picture_url)
            try:
                  
                r = requests.get(picture_url, stream=True)#获取x对应的网络资源
                f = open('{0}.jpg'.format(word),
                                            "wb") #"wb"表示二进制写方式打开文件
                f.write(r.content)    #图片内容写入文件
                f.close()
            except Exception as e :
                print("error")
                pass
                  

'''
<div id="synoid" style="display:block;">____从这里开始
    <div class="df_div2">
        <div class="de_title1 b_dictHighlight">adj.</div>
        <div class="col_fl">

            <a href="/dict/search?q=novel......" h="ID=Dictionary,...">
            <span class="p1-4 b_alink">novel</span>
            </a>

            <span>,</span>

            <a href="/dict/search?q=newfangled..." h="ID=Dictionary...">
            <span class="p1-4 b_alink">newfangled</span>
            </a>

            <span>,</span>

            <a href="/dict/search?q=original..." h="ID=Dictionary...">
            <span class="p1-4 b_alink">original</span>
            </a>
            
            <span>,</span>
            <a href="/dict/search?q=latest&..." h="ID=Dictionary,5301.1">
            <span class="p1-4 b_alink">latest</span>
            </a>
            
            <span>,</span>   ________读到这
        </div>
    </div> 
</div>

'''
