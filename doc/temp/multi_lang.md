# TO OUR LANGUAGE

## Common

### Common - SK / PIN / VIN

`$Adv_BCM_IMMO_Common_Fail3` "防盗匹配失败, 原因为: VIN确认失败. "
> error_common_check_vin "VIN确认失败"

`$Adv_BCM_IMMO_Common_RC5804_Fail4` "防盗匹配失败, 原因为: 无效的PIN码 "
`$Adv_BCM_IMMO_Common_RC5809_Fail3` "防盗匹配失败, 原因为: 无效的PIN码 "
> error_common_check_pin "PIN码无效"

`$Adv_BCM_IMMO_Common_Fail9` "防盗匹配失败, 原因为: 进入扩展会话失败. "
> error_common_extend "进入扩展会话失败"

### Common - Connect / Read / Write

`$Adv_BCM_IMMO_Common_RC5804_Fail6` "防盗匹配失败, 原因为: CRC错误 "
`$Adv_BCM_IMMO_Common_RC5805_Fail4` "防盗匹配失败, 原因为: CRC错误; 返修提示: 1, 建议排查ECM型号是否正确, BCM型号是否正确; 2, 如果均正确, 可以检查总线是否存在干扰; "
`$Adv_BCM_IMMO_Common_RC5809_Fail5` "防盗匹配失败, 原因为: CRC错误; 返修提示: 1, 建议排查ECM型号是否正确, BCM型号是否正确; 2, 如果均正确, 可以检查总线是否存在干扰; "
> error_common_crc "CRC错误"

`$Adv_BCM_IMMO_Common_Fail2` "防盗匹配失败, 原因为: OBD未连接. "
> error_common_obd "OBD未连接"

`$Adv_BCM_IMMO_Common_Fail16` "防盗匹配失败, 原因为: No ECM. "
`$Adv_BCM_IMMO_Common_RC5804_Fail5` "防盗匹配失败, 原因为: ECM通讯错误 "
`$Adv_BCM_IMMO_Common_RC5805_Fail3` "防盗匹配失败, 原因为: ECM通讯错误 "
`$Adv_BCM_IMMO_Common_RC5808_Fail1` "防盗匹配失败, 原因为: No ECM. "
`$Adv_BCM_IMMO_Common_RC5809_Fail4` "防盗匹配失败, 原因为: ECM通讯错误 "
> error_common_connect_ecm "无法与ECM建立通讯"

`$Adv_BCM_IMMO_Common_RC5800_Fail1` "防盗匹配失败, 原因为: 读写内存错误; 1, BCM KL30 下电后重试该服务; 2, 更换BCM; "
`$Adv_BCM_IMMO_Common_RC5806_Fail1` "防盗匹配失败, 原因为: 读写内存错误; 返修提示: \"1, BCM KL30 下电后重试该服务; 2, 更换BCM; \" "
> error_common_rw_memory "读写内存出错."

`$Adv_BCM_IMMO_Common_Fail5` "防盗匹配失败, 原因为: 获取钥匙数量失败. "
`$Adv_BCM_RKE_Fail12` "读取钥匙槽数量失败,原因: 未知错误! "
> error_common_get_keyamt "获取钥匙数量失败"

`$Adv_BCM_IMMO_Common_Fail7` "防盗匹配失败, 原因为: 读取到钥匙数量 "
`$Adv_PEPSCon_AddKeyInva_Fail8_10` "添加钥匙 (原钥匙无效) 失败, 原因为: 找到的钥匙的数量不等於请求学习的钥匙数量 "
`$Adv_PEPSCon_AddKeyInva_Fail8_9` "添加钥匙 (原钥匙无效) 失败, 原因为: 达到允许学习钥匙的最大数量 "
> error_common_get_wrong_keyamt "读取到错误的钥匙数量"
> error_common_get_wrong_keyamt_s "读取到错误的钥匙数量: %s"

`$Adv_BCM_IMMO_2_5_Delete_Success` "该车无已匹配的钥匙 "  
`$Adv_BCM_IMMO_Common_Fail11` "该车无已匹配的钥匙. "
> notice_common_nokey "该车无已匹配的钥匙."

### Common - Other

`$Adv_BCM_IMMO_Common_RC5800_Fail11` "防盗匹配失败, 原因为: 未知错误. "
`$Adv_BCM_IMMO_Common_RC5804_Fail7` "防盗匹配失败, 原因为: 未知错误 "
> error_common_unknown "未知错误"

`$Adv_BCM_IMMO_Common_Fail4` "防盗匹配失败, 原因为: "
> error_common_reason_s "失败. 失败原因为: %s"

`$Adv_BCM_IMMO_Common_Fail10` "防盗匹配失败, 原因为: 安全解密失败. "
> error_common_safeaccess "安全解密失败"

`$Adv_BCM_IMMO_Common_Tip2` "钥匙匹配数已达最大. "
> notice_common_maxkey "钥匙匹配数已达最大."

`$Adv_Common_ChoiceEnd` "用户已选择结束. "
> notice_common_choice_end "用户已选择结束."

## Multi

### Multi - Lock / Unlock

`$Adv_BCM_IMMO_Common_Fail6` "防盗匹配失败, 原因为: IMMO未锁定. "
`$Adv_BCM_IMMO_Common_RC5800_Fail2` "防盗匹配失败, 原因为: IMMO未锁定; 返修提示: 1, 读取BCM IMMO模块状态; 2, 确保BCM具备正确的PIN, SK, VIN后锁定BCM "
`$Adv_BCM_IMMO_Common_RC5804_Fail1` "防盗匹配失败, 原因为: IMMO未锁定; 返修提示: \"1, BCM KL30 下电后重试该服务; 2, 更换BCM; \" "
`$Adv_BCM_IMMO_Common_RC5805_Fail2` "防盗匹配失败, 原因为: IMMO未锁定; 返修提示: \"1, 读取BCM IMMO模块状态; 2, 确保BCM具备正确的PIN, SK, VIN后锁定BCM\" "
`$Adv_BCM_IMMO_Common_RC5809_Fail2` "防盗匹配失败, 原因为: IMMO未锁定; 返修提示: \"1, 读取BCM IMMO模块状态; 2, 确保BCM具备正确的PIN, SK, VIN后锁定BCM\" "
`$Adv_BCM_IMMO_Common_REC807_Fail1` "防盗匹配失败, 原因为: IMMO not locked. "
> error_multi_immo_not_locked "防盗匹配失败: IMMO未锁定"

`$Adv_BCM_IMMO_Common_RC5804_Fail2` "防盗匹配失败, 原因为: IMMO已锁定. "
> error_multi_immo_locked "防盗匹配失败: IMMO已锁定"

### Multi - SK / PIN / VIN

`$Adv_BCM_IMMO_Common_Fail14` "防盗匹配失败, 原因为: 写入VIN失败. "
`$Adv_BCM_IMMO_Common_REC807_Fail4` "防盗匹配失败, 原因为: VIN写入失败. "
> error_multi_write_vin "写入VIN失败"

`$Adv_BCM_IMMO_Common_Fail15` "防盗匹配失败, 原因为: 写入PIN失败. "
`$Adv_BCM_IMMO_Common_REC807_Fail2` "防盗匹配失败, 原因为: PIN写入失败. "
> error_multi_write_pin "写入PIN失败"

`$Adv_BCM_IMMO_Common_REC807_Fail3` "防盗匹配失败, 原因为: SK写入失败. "
> error_multi_write_sk "SK写入失败"

`$Adv_BCM_IMMO_2_5_Common_Fail1` "BCM模块已存在非本车ESK信息, 非全新BCM模块或非原车BCM模块, 不能在该车辆进行BCM防盗匹配. "  
`$Adv_BCM_IMMO_2_5_Common_Fail2` "ESK写入失败, 该BCM模块已存在非本车ESK信息, 非全新BCM模块或非原车BCM模块, 不能在该车辆进行BCM防盗匹配. "  
> error_multi_bcm_wrong_esk "防盗匹配失败: BCM模块已存在非本车ESK信息, 非全新BCM模块或非原车BCM模块, 不能在该车辆进行BCM防盗匹配."

`$Adv_BCM_IMMO_Common_RC5805_Fail1` "防盗匹配失败, 原因为: ECM已学习SK, 但SK不匹配 "
`$Adv_BCM_IMMO_Common_RC5808_Fail2` "防盗匹配失败, 原因为: ECM has SK. "
> error_multi_ecm_wrong_sk "防盗匹配失败: ECM模块已存在非本车SK信息, 非全新ECM模块或非原车ECM模块, 不能在该车辆进行ECM防盗匹配."

`$Adv_BCM_IMMO_Common_RC5808_Fail3` "防盗匹配失败, 原因为: ECM has PIN. "
`$Adv_BCM_IMMO_Common_RC5809_Fail1` "防盗匹配失败, 原因为: ECM已学习PIN码, 但PIN不一致 "
> error_multi_ecm_has_pin "防盗匹配失败: ECM已学习PIN码, 但PIN不一致."

`$Adv_BCM_IMMO_Common_RC5806_Fail2` "防盗匹配失败, 原因为: 无SK "
`$Adv_BCM_IMMO_Common_RC5808_Fail4` "防盗匹配失败, 原因为: Virgin ECM. "
> error_multi_ecm_no_sk "防盗匹配失败: ECM模块无SK信息, 请重新做模块匹配流程."

`$Adv_BCM_IMMO_Common_RC5806_Fail3` "防盗匹配失败, 原因为: 无PIN码 "
> error_multi_no_pin "防盗匹配失败: 无PIN码信息."

`$Adv_BCM_IMMO_Common_RC5806_Fail4` "防盗匹配失败, 原因为: 无VIN码 "
> error_multi_no_vin "防盗匹配失败: 无VIN码信息."

`$Adv_BCM_IMMO_2_5_Common_RC62F5_Fail1` "ESCL学习失败, 原因为BCM无ESK值, 请重新操作. "  
`$Adv_BCM_IMMO_2_5_Common_RC62F6_Fail1` "ESCL学习失败, 原因为BCM无ESK值, 请重新操作. "  
> error_escl_learn_bcm_no_esk "ESK学习失败: BCM无ESK值. 请重新操作."

`$Adv_BCM_IMMO_2_5_Common_RC62F5_Fail2` "ESCL学习失败, 原因为ESCL的SCK值有误, 请重新学习ESCL, 若重试后仍然失败, 为模块问题, 请更换ESCL模块 "  
`$Adv_BCM_IMMO_2_5_Common_RC62F5_Fail4` "ESCL学习失败, 原因为ESCL已存在其他SK, 请重新学习ESCL "  
> error_escl_learn_bcm_wrong_sclk "ESK学习失败: ESCL的SCK值有误, 请重新学习ESCL."

### Multi - Connect / Read / Write

`$Adv_BCM_IMMO_2_5_Common_Fail3` "ESK写入失败, 请断电五分钟后重试! 若多次断电重试后仍无法写入, 则请将问题反馈至VDS运行保障群请求支持! "  
> error_multi_write_esk "防盗匹配失败: ESK写入失败, 请断电五分钟后重试! 若多次断电重试后仍无法写入, 则请将问题反馈至VDS运行保障群请求支持!"

`$Adv_BCM_IMMO_2_5_Common_Fail5` "ESCL未连接或故障, 请检查连接线后重试 "  
> error_multi_connect_escl "防盗匹配失败: ESCL连接失败, 请检查连接线后重试."

`$Adv_BCM_IMMO_2_5_Common_Fail4` "查询模块ESCL状态失败, 请断电五分钟后重试! 若多次断电重试后仍失败, 则为模块问题, 请更换模块! "  
> error_multi_read_escl "防盗匹配失败: 查询模块ESCL状态失败. 请断电五分钟后重试! 若多次断电重试后仍失败, 则为模块问题, 请更换模块!"

`$Adv_BCM_IMMO_2_5_Common_RC5802_Fail2` "天线故障, 请检查天线和BCM的连接线并重新做添加钥匙操作, 若仍返回该故障描述, 则请更换仪表板天线后再重试. "  
> error_multi_aerial "防盗匹配失败: 天线故障, 请检查天线和BCM的连接线并重新做添加钥匙操作, 若仍返回该故障描述, 则请更换仪表板天线后再重试."

`$Adv_BCM_IMMO_2_5_Common_RC5802_Fail3` "PEPS驱动芯片接收到无效数据, 请重新尝试 (若多次重试仍返回该故障描述, 则请换钥匙, 若仍无法添加, 则请更换BCM模块) . "  
> error_addkey_peps_invalid_data "防盗匹配失败: PEPS驱动芯片接收到无效数据, 请重新尝试 (若多次重试仍返回该故障描述, 则请换钥匙, 若仍无法添加, 则请更换BCM模块)."

`$Adv_BCM_IMMO_2_5_Common_RC62F5_Fail5` "ESCL擦除失败, 原因为学习过程中不满足学习条件或ESCL模块问题, 请检查ESCL和BCM之间的接线后重试, 若仍失败, 请更换ESCL. "  
> error_escl_clear_wrong_condition "ESK擦除失败: 学习过程中不满足学习条件或ESCL模块问题, 请检查ESCL和BCM之间的接线后重试."

### Multi - Other

`$Adv_BCM_IMMO_3_1_Common_RC65F5_Tip1` "防盗匹配失败, 原因为: 天线检测异常, 请检查驾驶员车门是否关闭! "  
`$Adv_BCM_IMMO_3_1_Common_RC65F5_Tip2` "防盗匹配失败, 原因为: 天线检测异常, 请检查辅助门天线状态! "  
`$Adv_BCM_IMMO_3_1_Common_RC65F5_Tip3` "防盗匹配失败, 原因为: 天线检测异常, 请检查Interior1天线状态! "  
`$Adv_BCM_IMMO_3_1_Common_RC65F5_Tip4` "防盗匹配失败, 原因为: 天线检测异常, 请检查Interior2天线状态! "  
`$Adv_BCM_IMMO_3_1_Common_RC65F5_Tip5` "防盗匹配失败, 原因为: 天线检测异常, 请检查Interior3天线状态! "  
> error_multi_aerial "防盗匹配失败: 天线检测异常"
> error_multi_aerial_s "防盗匹配失败: 天线 %s 检测异常"

`$Adv_BCMReset_Tip1` "BCM复位需要注意以下几点: 1. BCM复位, 必须在**原车**上进行; 2. 复位成功后, 该BCM将可用于*原车*或其他车辆, 重新做IMMO防盗匹配. 3. BCM已经匹配的钥匙数量必须小于三把. 请确认好以下条件: 1. 请将诊断仪连接至车辆OBD接头 2. 确认诊断仪与互联网的连接 3. 请确认档位在OFF或ACC档; 4. 以上确认完毕后, 请点击[下一步] "  
> notice_bcm_before_reset "BCM复位请注意:\n1. 必须在**原车**上进行;\n2. 复位成功后, 该BCM将可用于*原车*或其他车辆, 重新做IMMO防盗匹配.\n3. BCM已经匹配的钥匙数量必须小于三把.\n请确认好以下条件:\n1. 请将诊断仪连接至车辆OBD接头\n2. 确认诊断仪与互联网的连接\n3. 请确认档位在OFF或ACC档;\n4. 以上确认完毕后, 请点击[下一步]."

`$Adv_BCM_IMMO_2_5_Common_Fail6` "车辆档位不在OFF或者ACC档, 请切换电源状态后重试. "  
> error_multi_power_mode "防盗匹配失败: 车辆档位不在OFF或ACC档, 请切换电源状态后重试."

`$Adv_BCM_IMMO_2_5_Common_Fail7` "匹配钥匙后未退出工厂模式,请检查钥匙是否损坏, 并重新学习钥匙. "  
> error_multi_factory_mode "防盗匹配失败: 匹配钥匙后未退出工厂模式,请检查钥匙是否损坏, 并重新学习钥匙."

`$Adv_BCM_IMMO_2_5_Common_RC5802_Tip4` "BCM模块EEP故障, 请选择是否重试 (若多次重试后仍弹出该故障描述, 则请更换BCM模块) . "  
> error_multi_bcm_eep "防盗匹配失败: BCM模块内部EEP故障, 请选择是否重试."

`$Adv_BCM_IMMO_2_5_Common_RC62F5_Fail3` "ESCL学习失败, 原因为电源模式不在OFF或ACC模式, 请切换电源状态后重试. "  
> error_escl_learn_power_mode "ESK学习失败: 电源模式不在OFF或ACC模式, 请切换电源状态后重试."

`$Adv_BCM_IMMO_Mult_Success` "防盗匹配成功. "
> notice_multi_success "防盗匹配成功."

`$Adv_BCM_IMMO_Mult_Success1` "防盗匹配结果上传成功, 请将点火开关切换至OFF档30秒以上. "
> notice_multi_final_success "防盗匹配结果: 成功. 请将点火开关切换至OFF档30秒以上."

`$Adv_BCM_IMMO_Mult_Fail1` "防盗匹配结果上传失败, 原因为: 上传多功能版结果失败. "
> error_multi_final "防盗匹配结果: 失败."

## Addkey

### Addkey - Other

`$Adv_BCM_IMMO_Common_Tip1_1` "已匹配钥匙数量: "
`$Adv_BCM_IMMO_Common_Tip1_2` "剩余匹配钥匙数量: "
`$Adv_BCM_IMMO_Common_Tip1_3` ". 是否添加钥匙？ "
`$Adv_BCM_RKE_Tip3` "是否继续匹配第二把钥匙？ "
`$Adv_BCM_RKE_Tip4` "请换第二把钥匙并同时按下遥控解锁键和闭锁键超过2S "
`$Adv_BCM_RKE_Tip5` "最大支持匹配2把遥控钥匙, 当前已匹配2把 "
`$Adv_IBC_IMMO_Common_Tip0_1` "已有 "
`$Adv_IBC_IMMO_Common_Tip0_2` "把有效钥匙, 是否继续添加钥匙？ "
> confirm_addkey_ask_with_amt_ss "已匹配钥匙数量/最大钥匙数量: %s/%s  \n是否继续添加钥匙？"

`$Adv_BCM_IMMO_Common_Fail8` "防盗匹配失败, 原因为: 已达最大钥匙匹配数量. "
`$Adv_BCM_IMMO_Common_RC5800_Fail3` "防盗匹配失败, 原因为: 钥匙槽已满; 返修提示: 1,BCM中已经学习的钥匙达到上限, 建议删除钥匙后重试; (旧钥匙需重新添加) "
`$Adv_BCM_RKE_Fail1` "钥匙槽已满, 无法添加, 请从头开始操作. "
`$Adv_BCM_RKE_Tip10` "已经配过2把遥控钥匙! "
`$Adv_BCM_RKE_Tip12` "已经配过4把遥控钥匙,无法继续添加, 请先进行删除遥控钥匙步骤, 再添加! "
`$Adv_BCM_RKE_Tip3` "是否继续匹配第二把钥匙？ "
`$Adv_BCM_RKE_Tip5` "最大支持匹配2把遥控钥匙, 当前已匹配2把 "
> error_addkey_amount_max "已达最大钥匙匹配数量, 请删除钥匙后重试"
> error_addkey_amount_max_s "已达最大钥匙匹配数量(%s), 请删除钥匙后重试"

`$Adv_BCM_RKE_Tip2` "请同时按下遥控解锁键和闭锁键超过2S "
`$Adv_BCM_RKE_Tip7` "请同时按下遥控解锁键和闭锁键超过2S "
`$Adv_BCM_RKE_Tip2` "请同时按下遥控解锁键和闭锁键超过2S "
`$Adv_BCM_RKE_Tip4` "请换第二把钥匙并同时按下遥控解锁键和闭锁键超过2S "
`$Adv_BCM_RKE_Tip7` "请同时按下遥控解锁键和闭锁键超过2S "
> notice_addkey_rke_pushbutton "请将钥匙放到正确位置, 同时按下遥控解锁键和闭锁键超过2S"

`$Adv_BCM_IMMO_2_5_Common_RC5802_Tip3` "找不到钥匙或该钥匙无效, 请选择是否重试 (若多次重试后仍弹出该故障描述, 则请更换钥匙) "  
`$Adv_BCM_IMMO_2_5_Common_RC5802_Tip2` "添加钥匙失败, IMMO学习钥匙需要紧贴仪表板IMMO天线3CM内, 请确认钥匙放置位置是否正确后, 选择是否重新配钥匙, 若连续调整钥匙位置后仍然失败, 则检查是否拿错钥匙. "  
> confirm_addkey_nokey_retry "添加钥匙失败: 找不到钥匙或该钥匙无效, 请选择是否重试."

`$Adv_BCM_IMMO_2_5_Common_RC5802_Tip5` "钥匙内部EEP故障, 请选择是否重试 (若多次重试后仍弹出该故障描述, 则请更换钥匙) "  
> confirm_addkey_eep_retry "添加钥匙失败: 钥匙内部EEP故障, 请选择是否重试."

`$Adv_BCM_RKE_Fail4` "钥匙EEP错误, 请重试学习流程, 若仍无法添加钥匙, 请更换钥匙. "
> error_addkey_eep_error "钥匙EEP错误, 请重试学习流程, 若仍无法添加钥匙, 请更换钥匙."

`$Adv_BCM_IMMO_AddKey_Fail1` "添加钥匙结果上传失败, 原因为: 上传添加钥匙结果失败. "
> error_addkey_final_fail "添加钥匙结果: 失败."

`$Adv_PEPSCon_AddKeyInva_Fail8_5` "添加钥匙 (原钥匙无效) 失败, 失败原因: 未知原因. "
> error_addkey_unknown "添加钥匙失败: 未知原因."

`$Adv_PEPSCon_AddKeyInva_Fail8_7` "添加钥匙 (原钥匙无效) 失败, 原因为: 重新尝试学习 "
> error_addkey_relearn "添加钥匙失败: 重新尝试学习."

`$Adv_PEPSCon_AddKeyInva_Fail8_12` "添加钥匙 (原钥匙无效) 失败, 原因为: PEPS ECU 故障 "
`$Adv_PEPSCon_AddKeyInva_Fail8_6` "添加钥匙 (原钥匙无效) 失败, 原因为: 车辆电压故障 "
> error_addkey_ecu "添加钥匙失败: PEPS ECU 故障 或 车辆电压故障."

`$Adv_BCM_RKE_Fail13` "无法开始遥控钥匙学习, 请断电五分钟后重试! 若多次断电重试后仍失败, 则为钥匙问题, 请更换钥匙! "
> error_addkey_rke "无法开始遥控钥匙学习, 请断电五分钟后重试! 若多次断电重试后仍失败, 则为钥匙问题, 请更换钥匙!"

`$Adv_BCM_IMMO_AddKey_Success` "添加钥匙结果上传成功, 请将点火开关切换至OFF档30秒以上. "
> notice_addkey_final_success "添加钥匙结果: 成功, 请将点火开关切换至OFF档30秒以上."

`$Adv_BCM_IMMO_Common_RC5800_Success` "添加钥匙成功 "
> notice_addkey_success "添加钥匙成功"

`$Adv_BCM_IMMO_Common_RC5800_Success1` "该钥匙已添加. "
`$Adv_BCM_RKE_Fail5` "该钥匙已学习, 请更换新钥匙. "
> notice_addkey_exist "该钥匙已添加"

`$Adv_BCM_IMMO_Common_RC5800_Fail6` "防盗匹配失败, 原因为: 无钥匙; 返修提示: \"1, 确认基站安装在锁头上紧固可靠, 无松动; 2, 钥匙需完全插入锁头; 3, 确认钥匙与线圈之间没有金属的屏蔽物体; 4, 钥匙状态异常, 建议更换钥匙; \" "
`$Adv_BCM_RKE_Fail3` "未找到钥匙, 请重试学习流程, 若仍无法添加钥匙, 请更换钥匙. "
`$Adv_PEPSCon_AddKeyInva_Fail8_8` "添加钥匙 (原钥匙无效) 失败, 原因为: 未找到有效钥匙. "
> error_addkey_no_key "添加钥匙失败: 检测不到钥匙."

`$Adv_BCM_IMMO_Common_RC5800_Fail5` "防盗匹配失败, 原因为: ABIC 或 Key通讯超时; 返修提示: \"1, 确认基站的线束连接正确, 无松动; 2, 确认基站安装在锁头上紧固可靠, 无松动; 3, 尝试更换基站; 4, 尝试更换基站连接线束或者钥匙.\" "
`$Adv_BCM_RKE_Fail2` "钥匙通讯超时, 请重试学习流程, 若仍无法添加钥匙, 请更换钥匙. "
> error_addkey_timeout "添加钥匙失败: 通讯超时."

`$Adv_BCM_IMMO_Common_RC5800_Fail10` "防盗匹配失败, 原因为: 写RKE错误; 返修提示: \"1, 可尝试重新添加该钥匙 2, 钥匙状态异常更换全新钥匙; \" "
`$Adv_BCM_RKE_Fail7` "写应答器EEPROM错误, 请检查模块和线圈后重试, 若仍无法添加钥匙, 请更换钥匙. "
> error_addkey_write_rke "添加钥匙失败: 写RKE错误"

`$Adv_BCM_IMMO_Common_RC5800_Fail4` "防盗匹配失败, 原因为: Transponder认证错误; 返修提示: \"1, 确认钥匙状态正常, 可能是不匹配的钥匙 2,使用KeyTest服务确认钥匙为新钥匙或者合法的旧钥匙 \" "
`$Adv_BCM_IMMO_Common_RC5800_Fail8` "防盗匹配失败, 原因为: 认证错误; 返修提示: \"1, 可尝试重新添加该钥匙 2, 钥匙状态异常更换全新钥匙; \" "
`$Adv_BCM_RKE_Fail8` "密钥添加结束, 加密认证失败, 请确保模块是与钥匙是同一个供应商后重试, 若仍无法添加钥匙, 请联系技术人员寻求支持. "
> error_addkey_confirm "添加钥匙失败: 钥匙认证错误. 请确认钥匙状态正常, 可能是不匹配的钥匙."

`$Adv_BCM_IMMO_Common_RC5800_Fail7` "防盗匹配失败, 原因为: 写Transponder内存错误; 返修提示: \"1, 钥匙状态异常更换全新钥匙; 2, 确认基站的线束连接正确, 无松动; 3, 确认基站安装在锁头上紧固可靠, 无松动; 4, 尝试更换基站; \" "
`$Adv_BCM_IMMO_Common_RC5800_Fail9` "防盗匹配失败, 原因为: Transponder配置错误; 返修提示: 1, 钥匙状态异常更换全新钥匙; "
`$Adv_BCM_RKE_Fail9` "转发器CFG页面配置错误, 请确保模块是与钥匙是同一个供应商后重试, 若仍无法添加钥匙, 请联系技术人员寻求支持. "
`$Adv_PEPSCon_AddKeyInva_Fail8_11` "添加钥匙 (原钥匙无效) 失败, 原因为: 找到无效钥匙 "
> error_addkey_config "添加钥匙失败: 钥匙配置错误. 请确认连接正确, 钥匙状态正常."

`$Adv_AddKey_Fail1` "该车无法添加钥匙, ESK未写入BCM, 请做模块匹配流程 "  
`$Adv_BCM_IMMO_2_5_Common_RC5802_Fail1` "BCM无ESK值, 请重新做模块匹配流程. "  
`$Adv_BCM_IMMO_Common_RC5804_Fail3` "防盗匹配失败, 原因为: 未匹配过的ECM "
> error_addkey_bcm_no_esk "添加钥匙失败: BCM模块无ESK值, 请重新做模块匹配流程."

`$Adv_BCM_IMMO_2_5_Common_RC5802_Tip1` "1. 每次只能新增一把钥匙; 2. 请将多余的钥匙, 拿出车外, 车内只保留1把钥匙, 放置在仪表板IMMO天线3CM内! "  
> notice_addkey "添加钥匙请注意:\n1. 每次只能新增一把钥匙;\n2. 请将多余的钥匙, 拿出车外, 车内只保留1把钥匙, 放置在仪表板IMMO天线3CM内!"

`$Adv_BCM_IMMO_2_5_Common_Tip1` "①钥匙学习成功, 请关闭车门, 按遥控解锁后再打开车门上ACC档\n②保证车速为0且主驾占用, 钥匙放到车内踩刹车后上到ON档. "  
`$Adv_BCM_RKE_Success` "添加钥匙成功, 请将点火开关切换至OFF档30秒以上. "
> notice_learnkey_success "钥匙学习成功, 请关闭车门, 按遥控解锁后再打开车门上ACC档\n请保证车速为0且主驾占用, 钥匙放到车内踩刹车后上到ON档."

`$Adv_BCM_RKE_Fail10` "RKE钥匙故障, 请重试学习流程, 若仍无法添加钥匙, 请更换钥匙. "
`$Adv_BCM_RKE_Fail6` "RKE钥匙故障, 请重试学习流程, 若仍无法添加钥匙, 请更换钥匙. "
> error_addkey_rke_wrong_key "添加钥匙失败: RKE钥匙故障."

`$Adv_BCM_RKE_Fail11` "RKE钥匙匹配失败, 原因: 用户手动退出钥匙匹配. "
> error_addkey_exit "添加钥匙失败: 用户手动退出钥匙匹配."

`$Adv_BCM_RKE_Tip1` "重新匹配钥匙会删除之前的所有钥匙, 是否继续？ "
> confirm_addkey_recover "重新匹配钥匙会删除之前的所有钥匙, 是否继续？ "

## Delkey

### Delkey - Other

`$Adv_BCM_IMMO_Common_Tip3` "提示: 1. 删除钥匙会将所有有效钥匙删除, 请确认已携带所有钥匙以重新匹配. 2. 请将诊断仪连接至车辆OBD接头, 3. 请确认档位在OFF或ACC档; 4. 确认诊断仪与网络的连接正常, 5. 以上确认完毕后, 请点击[下一步] "
> notice_delkey "提示:\n1. 删除钥匙会将所有有效钥匙删除, 请确认已携带所有钥匙以重新匹配.\n2. 请将诊断仪连接至车辆OBD接头;\n3. 请确认档位在OFF或ACC档;\n4. 确认诊断仪与网络的连接正常;\n5. 以上确认完毕后, 请点击 确认."

`$Adv_BCM_IMMO_DeleteKey_Tip1` "删除钥匙成功. "
`$Adv_BCM_IMMO_DeleteKey_Tips1` "所有已匹配的钥匙删除成功! "
> notice_delkey_success "删除钥匙成功."

`$Adv_BCM_IMMO_Common_Tip1_1` "已匹配钥匙数量: "
`$Adv_BCM_IMMO_Common_Tip1_4` "把钥匙, 确实要删除已匹配的所有钥匙？ "
> confirm_delkey_s "已匹配钥匙数量: %s\n是否要删除已匹配的所有钥匙?"

`$Adv_BCM_IMMO_2_5_Common_RC5802_Tip6` "钥匙槽已满 (最多只能添加两把钥匙) , 请确认是否需要删除原有钥匙？ "  
> confirm_delkey_amount_max "钥匙槽已满 (最多只能添加两把钥匙)\n是否需要删除原有钥匙?"

`$Adv_BCM_IMMO_Common_Fail1` "防盗匹配失败, 原因为: 无法访问售后服务器. "
> error_multi_final_fail "防盗匹配结果: 失败."

`$Adv_BCM_IMMO_Common_Fail12` "删除钥匙失败, 原因为: 删除失败. "
`$Adv_BCM_IMMO_DeleteKey_Fail1` "删除钥匙结果上传失败, 原因为: 上传删除钥匙结果失败. "
> error_delkey_final_fail "删除钥匙结果: 失败."

`$Adv_BCM_IMMO_DeleteKey_Success` "删除钥匙结果上传成功, 请将点火开关切换至OFF档30秒以上. "
> notice_delkey_final_success "删除钥匙结果: 成功, 请将点火开关切换至OFF档30秒以上."

`$Adv_BCM_IMMO_Common_Fail13` "删除钥匙失败, 原因为: 未删除所有钥匙. "
> error_delkey_not_all "删除钥匙失败: 未删除所有钥匙."

## Reset

### Reset - Other

`$Adv_BCM_IMMO_Reset_Fail1` "ECM复位结果上传失败, 原因为: 上传ECM复位结果失败. "
`$Adv_BCM_IMMO_Reset_Fail2` "ECM复位失败, 原因为: 复位失败. "
`$Adv_BCM_IMMO_Reset_Fail3` "ECM复位失败, 原因为: 无效的PIN码 "
`$Adv_BCM_IMMO_Reset_Fail4` "ECM复位失败, 原因为: ECM通讯错误 "
`$Adv_BCM_IMMO_Reset_Fail5` "ECM复位失败, 原因为: 未知错误. "
`$Adv_BCM_IMMO_Reset_Tip1` "1. ECM复位IMMO防盗信息, 必须在[原车]上进行; \n2. 车辆BCM的IMMO功能必须正常, 否则将有可能出现ECM复位失败或复位成功后钥匙无法继续使用风险; \n3. 复位成功后, 该ECM内的存储的IMMO防盗信息将被永久删除; \n4. 复位成功后, 该ECM将可用于本车和其他车辆, 重新匹配IMMO防盗系统. "
`$Adv_BCM_IMMO_Reset_Tip2` "ECM复位成功! 请将钥匙至OFF, 至少45秒后, 才能拆卸发动机控制模块 (ECM) "

## Unread

`$Adv_BCM_Reset_UploadSuccess` "BCM复位结果上传成功, 请将点火开关切换至OFF档30秒以上. "
`$Adv_BCM_WriteIMMO_Fail3` "写入失败, 获取ESK失败. "
`$Adv_BDC_REK_ERROR01` "模块故障或响应超时, 请联系技术人员寻求支持 "
`$Adv_BDC_REK_ERROR02` "读写读写EEPROM错误, 请联系技术人员寻求支持 "
`$Adv_BDC_REK_ERROR03` "RF芯片配置清除失败, 请联系技术人员寻求支持 "
`$Adv_Bcm_Reset_Fail1` "复位失败, 请确认该BCM是否为原车BCM, 非原车不能进行BCM复位! 若确认为原车模块, 请将模块断电5分钟后重试, 若多次重试仍失败, 则为模块问题, 请使用新的BCM模块! "
`$Adv_Common_ConfirmVIN` "请确认当前车辆VIN是否为: "
`$Adv_Common_OBD` "OBD未连接, 请检查OBD接口连接状态后重试 "
`$Adv_Common_TurnON` "将整车电源切换至ON状态 "
`$Adv_Common_UnknownError` "未知错误 "
`$Adv_Common_WriteVIN` "请手动输入VIN "
`$Adv_IBC_IMMO_Common_Fail2` "防盗匹配失败, 原因为: 安全访问失败, 请确认车型配置选择是否正确! 若确认无误, 则请将问题反馈至VDS运行保障群请求支持. "
`$Adv_IBC_IMMO_Common_Fail3` "防盗匹配失败, 原因为: 模块返回值有误, 无法检测钥匙数量, 程序异常退出, 请将问题反馈至VDS运行保障群请求支持. "
`$Adv_IBC_IMMO_Common_Fail4` "防盗匹配失败, 原因为: 读取工厂模式状态负反馈. "
`$Adv_IBC_IMMO_Common_Fail5` "1. 钥匙学习成功, 请关闭车门, 按遥控解锁后再打开车门上ACC档; 2. 保证车速为0且主驾占用, 钥匙放到车内踩刹车后上到ON档. "
`$Adv_IBC_IMMO_Common_Fail6` "防盗匹配失败, 原因为: 钥匙状态未退出工厂模式,请检查钥匙是否损坏, 并重新学习钥匙. "
`$Adv_IBC_IMMO_Common_Fail7` "ECM学习失败. "
`$Adv_IBC_IMMO_Common_Tip1` "1. 每次只能新增一把钥匙; 2. 请将多余的钥匙, 拿出车外, 车内只保留1把钥匙, 钥匙放在有钥匙标识 (即应急启动位置) 的低频天线正上方! "
`$Adv_IBC_IMMO_Common_Tip2` "无法确认车辆等级, 请确认该车是否为一键启动PEPS车型? "
`$Adv_IBC_IMMO_Common_Tip3` "提示: 1. 请将诊断仪连接至车辆OBD接头, 2. 请确认档位在OFF或ACC档; 3. 确认诊断仪与网络的连接正常, 4. 以上确认完毕后, 请点击[下一步] "
`$Adv_IBC_IMMO_Common_Tip4` "ECM学习成功! "
`$Adv_IBC_IMMO_Common_Tip6` "添加钥匙失败, IMMO学习钥匙需要将钥匙放在钥匙感应区域, 即换挡杆前面的无线充电处 有钥匙标识 (即应急启动位置) 的低频天线正上方! , 请确认钥匙放置位置是否正确后, 选择是否重新配钥匙, 若连续调整钥匙位置后仍然失败, 则检查是否拿错钥匙. "
`$Adv_PEPSCon_AddKeyInva_Fail5` "PEPS匹配结果上传失败. "
`$Adv_PEPSCon_AddKeyInva_Fail6` "该车无法添加钥匙, 请确认ESK已写入PEPS. "
`$Adv_PEPSCon_AddKeyInva_Fail7` "读取钥匙数错误. "
`$Adv_PEPSCon_AddKeyInva_Fail8_2` "进入EOL匹配模式失败, 失败原因: 车辆电源状态不对 "
`$Adv_PEPSCon_AddKeyInva_Fail8_3` "进入EOL匹配模式失败, 失败原因: PEPS正在学习流程 "
`$Adv_PEPSCon_AddKeyInva_Fail8_4` "进入EOL匹配模式失败, 失败原因: ESK数据问题 "
`$Adv_PEPSCon_AddKeyInva_Fail8_1` "进入EOL匹配模式失败, 失败原因: 车辆电压故障 "
`$Adv_PEPSCon_AddKeyInva_Success` "PEPS匹配结果上传成功, 请将点火开关切换至OFF档30秒以上. "
`$Adv_PEPSCon_AddKeyInva_Tip1` "1. 本程序, 主要用于原钥匙丢失后, 希望通过钥匙的重新匹配, 达到使丢失的钥匙无法再使用的目的. \n2. 每次使用本程序, 成功添加钥匙的前提下, 凡是本次未被添加的钥匙, 均会无法再启动车辆 (钥匙被删除) . \n3. 使用完本程序后, 若想新增更多的钥匙, 只能使用《新增钥匙 (原钥匙继续有效) 》程序. "
`$Adv_PEPSCon_AddKeyInva_Tip2` "1. 每次只能新增一把钥匙; \n2. 请将多余的钥匙拿出车外, 车内只保留1把钥匙, 放置在手刹操作手柄附近! "
`$Adv_PEPSCon_AddKeyInva_Tip3_1` "已匹配钥匙数量: "
`$Adv_PEPSCon_AddKeyInva_Tip3_2` ", 剩余匹配钥匙数量: "
`$Adv_PEPSCon_AddKeyInva_Tip3_3` ",是否继续添加钥匙？ "
`$Adv_PEPSCon_AddKeyVa_Tip1` "添加钥匙成功. "
`$Adv_PEPSCon_AddKeyVa_Tip2_1` ",达到最大匹配钥匙数. "
`$Adv_PEPSCon_ESCLRe_Fail3_1` "ESCL复位失败, 原因为: ESCL is not learnt. "
`$Adv_PEPSCon_ESCLRe_Fail3_10` "ESCL复位失败, 原因为: ESCL上电失败 "
`$Adv_PEPSCon_ESCLRe_Fail3_11` "ESCL复位失败, 原因为: 车辆电压故障 "
`$Adv_PEPSCon_ESCLRe_Fail3_12` "ESCL复位失败, 原因为: 未知原因. "
`$Adv_PEPSCon_ESCLRe_Fail3_2` "ESCL复位失败, 原因为: ESCL neutral failed. "
`$Adv_PEPSCon_ESCLRe_Fail3_3` "ESCL复位失败, 原因为: ESK与PEPS ESK不匹配. "
`$Adv_PEPSCon_ESCLRe_Fail3_4` "ESCL复位失败, 原因为: 车辆电源状态非OFF "
`$Adv_PEPSCon_ESCLRe_Fail3_5` "ESCL复位失败, 原因为: 严重等级的DTC "
`$Adv_PEPSCon_ESCLRe_Fail3_6` "ESCL复位失败, 原因为: 其他错误 "
`$Adv_PEPSCon_ESCLRe_Fail3_7` "ESCL复位失败, 原因为: PEPS ECU 故障 "
`$Adv_PEPSCon_ESCLRe_Fail3_8` "ESCL复位失败, 原因为: ESCL 内部故障 "
`$Adv_PEPSCon_ESCLRe_Fail3_9` "ESCL复位失败, 原因为: ESCL通讯失败 "
`$Adv_PEPSCon_ESCLRe_Fail4` "ESCL复位失败, 原因为: 服务器无该车信息. "
`$Adv_PEPSCon_ESCLRe_Fail6` "ESCL复位结果上传失败. "
`$Adv_PEPSCon_ESCLRe_Success1` "ESCL复位结果上传成功, 请将点火开关切换至OFF档30秒以上. "
`$Adv_PEPSCon_ESCLRe_Success2` "该车无ESCL, 不需要做ESCL复位 "
`$Adv_PEPSCon_Mult_Fail1` "PEPS匹配结果上传失败. "
`$Adv_PEPSCon_Mult_Fail4` "一键启动配置失败, 原因: ECM学习失败. "
`$Adv_PEPSCon_Mult_Fail6` "一键启动配置失败, 原因为: 获取ESK VC失败. "
`$Adv_PEPSCon_Mult_Fail7` "一键启动配置失败, 原因为: VIN写入失败. "
`$Adv_PEPSCon_Mult_Fail8` "一键启动配置失败, 原因为: 整车配置代码写入失败. "
`$Adv_PEPSCon_Mult_Fail9_1` "ESCL学习失败, 失败原因: ESCL检查ESK失败 "
`$Adv_PEPSCon_Mult_Fail9_10` "ESCL学习失败, 失败原因: 严重等级的DTC "
`$Adv_PEPSCon_Mult_Fail9_11` "ESCL学习失败, 失败原因: 其他错误 "
`$Adv_PEPSCon_Mult_Fail9_12` "ESCL学习失败, 失败原因: 车辆电源状态非OFF "
`$Adv_PEPSCon_Mult_Fail9_13` "ESCL学习失败, 失败原因: 其他错误. 例如 ESCL virgin bit和normal bit一致, 建议更换ESCL "
`$Adv_PEPSCon_Mult_Fail9_14` "ESCL学习失败, 失败原因: 请检查DTC, 因为设置了严重等级的DTC. "
`$Adv_PEPSCon_Mult_Fail9_15` "ESCL学习失败, 失败原因: 请检查电源状态, 电源状态应该在OFF下, 才能学习成功. "
`$Adv_PEPSCon_Mult_Fail9_2` "ESCL学习失败, 失败原因: ESCL 内部故障 "
`$Adv_PEPSCon_Mult_Fail9_3` "ESCL学习失败, 失败原因: 已经学过的ESCL "
`$Adv_PEPSCon_Mult_Fail9_4` "ESCL学习失败, 失败原因: ESCL通讯失败 "
`$Adv_PEPSCon_Mult_Fail9_5` "ESCL学习失败, 失败原因: ESCL上电失败 "
`$Adv_PEPSCon_Mult_Fail9_6` "ESCL学习失败, 失败原因: 车辆电压故障, 正常值为9~16V "
`$Adv_PEPSCon_Mult_Fail9_7` "ESCL学习失败, 失败原因: 未知原因. "
`$Adv_PEPSCon_Mult_Fail9_8` "ESCL学习失败, 失败原因: ESK数据问题 "
`$Adv_PEPSCon_Mult_Fail9_9` "ESCL学习失败, 失败原因: PEPS ECU 故障. 请下电重试, 如果依然失败请更换PEPS. "
`$Adv_PEPSCon_Mult_Success` "一键启动配置成功. "
`$Adv_PEPSCon_Mult_Success1` "PEPS匹配结果上传成功, 请将点火开关切换至OFF档30秒以上. "
`$Adv_PEPSCon_Mult_Tip1` "当前控制器被锁住, 会在该界面停止5分钟, 请稍后 "
`$Adv_PEPSCon_Reset_Fail6` "PEPS复位失败, 原因为: 服务器无该车信息. "
`$Adv_PEPSCon_Reset_Fail7` "PEPS复位失败, 原因为: 一般原因. "
`$Adv_PEPSCon_Reset_Fail8` "PEPS复位失败, 原因为: VIN码清除失败. "
`$Adv_PEPSCon_Reset_Fail9` "PEPS复位结果上传失败. "
`$Adv_PEPSCon_Reset_Success` "PEPS复位结果上传成功, 请将点火开关切换至OFF档30秒以上. "
`$Adv_PEPSCon_Reset_Success2` "1. VIN码清除成功! \n2. 请将PEPS模块拆卸下来, 安装至目标车辆上, \n然后使用《CN200S PEPS匹配 (多功能版) -售后返修程序》程序进行匹配! "
`$Adv_Refresh_Fail12` "写入VIN失败 "
