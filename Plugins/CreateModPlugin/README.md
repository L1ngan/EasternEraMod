# Create Mod Plugin

这是一个用于创建 Mod 数据结构的插件，与项目分离，可以在蓝图中使用。

## 功能特性

- **独立插件**：与主项目分离，可以独立使用
- **C++ 和蓝图支持**：数据结构可以在 C++ 和蓝图中使用
- **可配置字段**：从 `FEastRimWorldHumanData` 中选取的常用字段
- **默认 DataTable**：包含示例数据的 DataTable

## 数据结构

### FModHumanData

包含以下可配置字段：

#### 角色定制 (Character Customization)
- `CustomizationId`: 捏人数据的 ID
- `Height`: 身高 (100-250)
- `Weight`: 体重 (30-200)
- `BackgroundStory`: 背景故事
- `InitCharacteristicIds`: 初始特性 ID 列表
- `RefuseText`: 投靠时拒绝文本
- `AcceptText`: 投靠时接受文本
- `JoinText`: 加入文本

#### 旅行者 (Traveler)
- `bTraveler`: NPC 标识
- `DialogueGroupID`: 对话组 ID
- `TravelerTitle`: 称号
- `TravelerHeadIcon`: 头顶图标
- `TravelerSpeechBubble`: 场景喊话
- `TravelerIdleMontage`: NPC 待机动画
- `TravelerMoney`: 商人初始金钱（范围）
- `TravelerGoodsNum`: 商人商品数量（范围）
- `TravelerGoodsId`: 商品 ID
- `TravelerForceID`: NPC 所属势力 ID
- `ExchangeMartialArtsID`: 切磋 ID

## 使用方法

### 1. 在蓝图中使用

1. 在蓝图中创建 `FModHumanData` 结构体变量
2. 设置所需的字段值
3. 使用该结构体数据

### 2. 使用 DataTable

1. 打开 `Content/DT_ModHumanData.csv` 文件
2. 在编辑器中导入为 DataTable
3. 选择 `FModHumanData` 作为行结构
4. 在 DataTable 中编辑数据

### 3. 在 C++ 中使用

```cpp
#include "ModDataStruct.h"

// 创建结构体实例
FModHumanData ModData;
ModData.Height = 180;
ModData.Weight = 120;
ModData.BackgroundStory = FText::FromString("Example background story");
```

## 文件结构

```
CreateModPlugin/
├── CreateModPlugin.uplugin          # 插件描述文件
├── Source/
│   ├── CreateModPlugin/             # Runtime 模块
│   │   ├── CreateModPlugin.Build.cs
│   │   ├── CreateModPlugin.h
│   │   ├── CreateModPlugin.cpp
│   │   └── Public/
│   │       └── ModDataStruct.h      # 数据结构定义
│   └── CreateModPluginEditor/        # Editor 模块
│       ├── CreateModPluginEditor.Build.cs
│       ├── CreateModPluginEditor.h
│       └── CreateModPluginEditor.cpp
└── Content/
    └── DT_ModHumanData.csv          # 默认 DataTable CSV 文件
```

## 引擎版本

- Unreal Engine 5.6

## 依赖

- Core
- CoreUObject
- Engine
- DeveloperSettings

## 注意事项

- 此插件不依赖 Steam 或其他第三方库
- 数据结构基于 `FEastRimWorldHumanData`，但已简化为常用字段
- DataTable CSV 文件需要在编辑器中导入才能使用

