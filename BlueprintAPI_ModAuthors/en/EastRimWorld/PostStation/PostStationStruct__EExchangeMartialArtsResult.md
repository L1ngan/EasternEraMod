# `enum` `EExchangeMartialArtsResult`

**Source header:** `EastRimWorld/PostStation/PostStationStruct.h`

---

## Functional description (from header comments)

> 切磋结束结果(EndExchangeMartialArts 广播时随实例带出; None=未分胜负结束, 如超时未到场取消/开始前角色死亡/读档角色缺失)

## Enumerators

| Value | Display name | Description |
|------|------|------|
| `None` |  | Ended without a decided result (e.g., timeout before start, character death before start, or missing character after load). |
| `PlayerWin` |  | The player won the sparring match. |
| `PlayerFailed` |  | The player lost the sparring match. |
| `Cancelled` |  | The sparring match was cancelled. |
