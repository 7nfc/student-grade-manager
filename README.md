# 学生成绩管理系统

这是大一《程序设计基础》课程项目：一个基于 C 语言链表实现的学生成绩管理系统。程序支持录入学生信息、浏览、查找、删除、修改、按平均分排序，并将数据保存到 `grade.txt`。

## 功能

- 录入学生学号、姓名、数学、外语、计算机成绩
- 自动计算三科平均分
- 浏览全部学生成绩信息
- 按学号查找学生
- 删除指定学生
- 修改学生基本信息或单科成绩
- 按平均分排序
- 将数据写入并读取 `grade.txt`

## 文件说明

| 文件 | 说明 |
| --- | --- |
| `grade.h` | 结构体定义和函数声明 |
| `grade.main.c` | 程序入口和菜单逻辑 |
| `grade.input.c` | 学生信息录入与写入文件 |
| `grade.show.c` | 显示学生信息 |
| `grade.search.c` | 按学号查找 |
| `grade.delete.c` | 删除学生记录 |
| `grade.change.c` | 修改学生记录 |
| `grade.sort.c` | 按平均分排序 |
| `grade.load.c` | 从文件加载/显示数据 |
| `grade.txt` | 示例成绩数据 |

## 编译运行

### 使用 Makefile

```bash
make
./grade
```

### 手动编译

```bash
gcc grade.main.c grade.input.c grade.show.c grade.search.c grade.delete.c grade.change.c grade.sort.c grade.load.c -o grade
```

Windows PowerShell 下运行：

```powershell
.\grade.exe
```

## 输入格式

启动程序后先输入学生数据，每行格式如下：

```text
学号 姓名 数学成绩 外语成绩 计算机成绩
```

例如：

```text
9701 Lily 88 70 84
9702 Lihua 90 90 90
0
```

输入学号 `0` 表示结束录入。

## 说明

本仓库保留课程项目的原始 C 语言实现风格，便于展示学习过程和后续改进。