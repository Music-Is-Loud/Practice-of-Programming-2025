# README

这是一个基于C++11标准开发的命令行工具，用于将BMP格式图像顺时针旋转90度。

### 1.系统要求

#### 支持的操作系统

- **macOS** 10.15 Catalina 或更新版本
- **Linux** (需安装GNU C++编译器)

#### 开发环境

- 编译器: clang++ ≥ 12.0 或 g++ ≥ 9.0
- 构建工具: 终端命令行环境
- 测试平台: macOS Monterey 12.6.7 (VSCode 1.89.1)

#### 依赖项

- 标准C++库

- C标准I/O库

### 2.编译指南

```bash
#必需编译选项:
#禁用结构体对齐优化并启用C++11标准
g++ -std=c++11 -o rotatebmp rotatebmp.cpp
#step1:进入源代码目录
cd /path/to/source_code

#step2:执行编译命令（默认使用clang++）
g++ -std=c++11 -o rotatebmp rotatebmp.cpp

#step3:添加可执行权限（仅首次需要）
chmod +x rotatebmp

#step4:验证编译结果
file rotatebmp  # 应显示 "Mach-O 64-bit executable x86_64"
```



### 3.使用指南

#### 命令格式

```bash
./rotatebmp <inputFileName.bmp> <outputFileName.bmp>
```

#### 操作示例

```bash
# 旋转图片sample_input.bmp并保存结果至rotated_output.bmp
./rotatebmp sample_input.bmp rotated_output.bmp
```

#### 输出情况

```bash
#程序运行成功，则直接生成旋转后的bmp图像保存在同一目录下
#打开文件不存在时
ERROR:CANNOT OPEN THE FILE...
#创建文件不成功或无写入权限时
ERROR:CANNOT CREATE THE FILE...
#命令行输入有误时
Usage: 该工具路径及工具名名 <input.bmp><output.bmp>
```

#### 注意事项

##### 1.输入文件要求

必须为未压缩24位真彩色BMP文件，建议图像尺寸不超过4096*4096

##### 2.路径规范

支持绝对路径和相对路径

##### 3.兼容性说明

不支持Windows系统原生编译

Linux环境需要自行安装g++开发工具链



### 4.文件结构说明

```
| 文件          | 描述                     |
|---------------|--------------------------|
| rotatebmp.cpp | 源代码文件               |
| rotatebmp     | 编译后的可执行文件       |
| README.md     | 项目说明文档             |
```