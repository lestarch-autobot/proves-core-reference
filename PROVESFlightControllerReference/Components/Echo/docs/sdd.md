---
title: Echo
category: Test
---

# Components::Echo

Emits the fixed greeting event `Greeting` ("Starch is great") `ECHO_REPEAT_COUNT` (6) times, back to back, each time the `ECHO` command is received. Used to exercise the command → event round trip on a deployment.

## Commands
| Name | Description |
|---|---|
| ECHO | Emit the `Greeting` event `ECHO_REPEAT_COUNT` times, then respond OK |

## Events
| Name | Severity | Description |
|---|---|---|
| Greeting | ACTIVITY_LO | "Starch is great" |

## Change Log
| Date | Description |
|---|---|
| 2026-10-23 | Initial Draft |
