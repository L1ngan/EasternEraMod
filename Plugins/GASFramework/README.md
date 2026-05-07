# GAS Framework 插件

## 概述

GAS Framework 是一个基础技能系统框架插件，提供了可复用的 GAS (Gameplay Ability System) 基础功能。该插件提取了项目中的通用框架代码，移除了项目特定的依赖，使其可以在不同项目中复用。

## 插件结构

### 核心类

1. **UGASAbilitySystemComponent** - 基础能力系统组件
   - 提供能力激活组管理
   - 能力取消和失败处理
   - 动态标签管理

2. **UGASGameplayAbility** - 基础游戏能力类
   - 能力激活组支持
   - 能力失败回调
   - 能力源接口

3. **UGASGlobalAbilitySystem** - 全局能力系统
   - 全局应用能力和效果
   - ASC 注册管理

4. **UGASAbilitySet** - 能力集
   - 批量授予能力、效果和属性集

5. **UGASAbilityTagRelationshipMapping** - 能力标签关系映射
   - 定义能力标签之间的阻塞和取消关系

6. **FGASGameplayEffectContext** - 游戏效果上下文
   - 扩展的效果上下文，支持能力源接口

7. **UGASAbilitySystemGlobals** - 能力系统全局配置
   - 自定义效果上下文分配

### 异步任务类

- **UGASAsyncTaskAttributeChanged** - 属性变化监听任务
- **UGASAsyncTaskGameplayTagAddedRemoved** - 标签添加/移除监听任务

## 使用方法

### 1. 在项目中继承基础类

```cpp
// 继承基础 AbilitySystemComponent
UCLASS()
class YOURGAME_API UYourAbilitySystemComponent : public UGASAbilitySystemComponent
{
    GENERATED_BODY()
    // 添加项目特定的功能
};

// 继承基础 GameplayAbility
UCLASS()
class YOURGAME_API UYourGameplayAbility : public UGASGameplayAbility
{
    GENERATED_BODY()
    // 添加项目特定的功能
};
```

### 2. 配置项目设置

在项目的 `.uproject` 文件中启用插件：

```json
{
    "Plugins": [
        {
            "Name": "GASFramework",
            "Enabled": true
        }
    ]
}
```

### 3. 在 Build.cs 中添加依赖

```csharp
PublicDependencyModuleNames.AddRange(new string[]
{
    "GASFramework",
    // ... 其他模块
});
```

## 不包含的内容

以下内容保留在项目特定代码中，不放入插件：

- **属性集 (Attribute Sets)** - 如 CombatSet, HealthSet 等
- **计算公式 (ModMagnitudeCalculation)** - 所有项目特定的计算公式
- **执行类 (Executions)** - 项目特定的执行逻辑
- **投射物系统** - 项目特定的投射物实现
- **场景文本** - 项目特定的UI显示
- **游戏提示** - 项目特定的提示系统

## 迁移指南

从原项目代码迁移到使用插件：

1. 将 `UEastRimWorldAbilitySystemComponent` 改为继承 `UGASAbilitySystemComponent`
2. 将 `UEastRimWorldGameplayAbility` 改为继承 `UGASGameplayAbility`
3. 更新所有引用基础类的地方
4. 保留项目特定的扩展功能在原项目中

## 注意事项

- 插件中的类使用 `GAS` 前缀，而不是项目特定的前缀
- 所有基础框架功能都是通用的，不包含业务逻辑
- 项目特定的功能应该通过继承和扩展来实现

