/*
 * R2_Invite_Def.h
 *
 *  Created on: Feb 2, 2015
 *      Author: xiaoliang
 */

#ifndef LOGIC_SERVER_PLAYER_MODULE_R2_INVITE_R2_INVITE_DEF_H_
#define LOGIC_SERVER_PLAYER_MODULE_R2_INVITE_R2_INVITE_DEF_H_


enum R2_INVITE_MAIL_STATUS {
	R2_INVITE_MAIL_STATUS_DEFAULT = 0,//未处理
	R2_INVITE_MAIL_STATUS_REGED = 1,//已注册
	R2_INVITE_MAIL_STATUS_UPLVING = 2,//升级中
	R2_INVITE_MAIL_STATUS_FAIL = 3,//处理失败
	R2_INVITE_MAIL_STATUS_SUCCESS = 5,//成功
};

enum R2_INVITE_COMMON_CFG_TYPE {
	R2_INVITE_COMMON_CFG_TYPE_LVUPING = 1,//达到多少级为升级中
	R2_INVITE_COMMON_CFG_TYPE_LVSECCESS = 2,//达到多少级为邀请成功
	R2_INVITE_COMMON_CFG_TYPE_DAILY_LIMIT = 3,//每日成功邀请次数
};

#endif /* LOGIC_SERVER_PLAYER_MODULE_R2_INVITE_R2_INVITE_DEF_H_ */
