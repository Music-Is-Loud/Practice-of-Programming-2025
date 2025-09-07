import pandas as pd
#pd.set_option('display.unicode.east_asian_width',True)
df = pd.read_excel("finance.xlsx",sheet_name=0)
df1 = df.groupby('日期',axis=0,as_index=False,dropna=True)['交易额'].sum()
#print(df1)
df2 = df1.sort_values(by='交易额')
#print(df2)
ans = df2.head(3)
#print(ans)
ans['星期几']=pd.to_datetime(ans['日期']).dt.weekday

#print(ans)
day=['Monday','Tuesday','Wednesday','Thursday','Friday','Saturday','Sunday']

for i in range(3):
    print(ans.iloc[i,0],int(ans.iloc[i,1]),day[ans.iloc[i,2]])
