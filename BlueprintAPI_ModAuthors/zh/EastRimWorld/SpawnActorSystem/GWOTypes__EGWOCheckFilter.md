# `enum` `EGWOCheckFilter`

**源码头文件:** `EastRimWorld/SpawnActorSystem/GWOTypes.h`

---

## 功能说明（来自头文件注释）

> 生成点有效性检测方式（水平/检测地面/检测地面加导航网格）

## 枚举值

| 值 | 显示名 | 说明 |
|------|------|------|
| `HORIZONTAL` | Horizontal | 水平检测：不做地面/导航检测，按水平面取点 |
| `CHECK_FLOOR` | Check Floor | 检测地面：生成点需通过地面射线检测 |
| `CHECK_FLOOR_NAV` | Check Floor + NavMesh | 检测地面并要求位于导航网格上 |
