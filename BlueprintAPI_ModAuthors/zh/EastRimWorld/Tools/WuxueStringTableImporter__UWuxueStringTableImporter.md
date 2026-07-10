# `class` `UWuxueStringTableImporter`

**源码头文件:** `EastRimWorld/Tools/WuxueStringTableImporter.h`

---

## 功能说明（来自头文件注释）

> Editor-only 批量工具：从 CSV 把 Key/SourceString 灌进指定 StringTable 资产。
> Python 用：
>     unreal.WuxueStringTableImporter.import_string_table_csv(
>         "/Game/Configs/StringTable/Item_StringTable.Item_StringTable",
>         "H:/Esvn/Tools/.../Item_StringTable.csv")

## 蓝图暴露函数

### 函数 `ImportStringTableCSV`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Wuxue|Tools" |
| 返回类型 | `int32` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `StringTableObjectPath` | `const FString&` |
| `CSVFilePath` | `const FString&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Wuxue|Tools", meta = (DisplayName = "Import StringTable CSV", DevelopmentOnly)) static int32 ImportStringTableCSV( const FString& StringTableObjectPath, const FString& CSVFilePath);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。 节点显示名可能为「Import StringTable CSV」。

**说明:**

> 把 CSV 里的 (Key,SourceString) 灌进 StringTable 资产 + MarkPackageDirty。
> **调用方负责落盘**：Python 侧需自行调 unreal.EditorAssetLibrary.save_asset(path)。
> @param StringTableObjectPath 例如 "/Game/Configs/StringTable/Item_StringTable.Item_StringTable"
> @param CSVFilePath           磁盘绝对路径，UTF-8 编码（可带 BOM），第一行表头 "Key,SourceString"。
>                              注意：CSV 引号内不支持真实换行，调用方需把 \n 转义成字面 "\\n"。
> @return 实际写入的条目数；-1 表示加载/解析失败。

---
