/*
 * hook.h.proto: header for hook.c
 *
 * Generated from hook.h.proto automatically by the Makefile
 *
 * @(#)$Id: hook.h 3 2008-02-25 09:49:14Z keaston $
 */

#ifndef __hook_h_
#define __hook_h_

enum HOOK_TYPES {
	ACTION_LIST,
	BANS_LIST,
	BANS_FOOTER_LIST,
	BANS_HEADER_LIST,
	CDCC_NOTE_LIST,
	CDCC_PACK_LIST,
	CDCC_POSTPACK_LIST,
	CDCC_PREPACK_LIST,
	CDCC_QUEUE_LIST,
	CDCC_QUEUEH_LIST,
	CDCC_SEND_NICK_LIST,
	CDCC_STATS_LIST,
	CHANOP_LIST,
	CHANNEL_NICK_LIST,
	CHANNEL_SIGNOFF_LIST,
	CHANNEL_STATS_LIST,
	CHANNEL_SWITCH_LIST,
	CHANNEL_SYNCH_LIST,
	CLONE_LIST,
	CONNECT_LIST,
	CTCP_LIST,
	CTCP_REPLY_LIST,
	DCC_CHAT_LIST,
	DCC_CONNECT_LIST,
	DCC_ERROR_LIST,
	DCC_HEADER_LIST,
	DCC_LOST_LIST,
	DCC_OFFER_LIST,
	DCC_POST_LIST,
	DCC_RAW_LIST,
	DCC_REQUEST_LIST,
	DCC_STAT_LIST,
	DCC_STATF_LIST,
	DCC_STATF1_LIST,
	DCC_TRANSFER_STAT_LIST,
	DCC_UPDATE_LIST,
	DEBUG_LIST,
	DESYNC_MESSAGE_LIST,
	DISCONNECT_LIST,
	EBANS_LIST,
	EBANS_FOOTER_LIST,
	EBANS_HEADER_LIST,
	ENCRYPTED_NOTICE_LIST,
	ENCRYPTED_PRIVMSG_LIST,
	EXEC_LIST,
	EXEC_ERRORS_LIST,
	EXEC_EXIT_LIST,
	EXEC_PROMPT_LIST,
	EXIT_LIST,
	FLOOD_LIST,
	FTP_LIST,
	HELP_LIST,
	HELPSUBJECT_LIST,
	HELPTOPIC_LIST,
	HOOK_LIST,
	IDLE_LIST,
	INPUT_LIST,
	INVITE_LIST,
	JOIN_LIST,
	JOIN_ME_LIST,
	KICK_LIST,
	LEAVE_LIST,
	LEAVE_ME_LIST,
	LIST_LIST,
	LLOOK_ADDED_LIST,
	LLOOK_JOIN_LIST,
	LLOOK_SPLIT_LIST,
	MAIL_LIST,
	MODE_LIST,
	MODE_STRIPPED_LIST,
	MODULE_LIST,
	MSG_LIST,
	MSG_GROUP_LIST,
	MSGLOG_LIST,
	NAMES_LIST,
	NETSPLIT_LIST,
	NICK_COMP_LIST,
	NICKNAME_LIST,
	NOTE_LIST,
	NOTICE_LIST,
	NOTIFY_LIST,
	NOTIFY_HEADER_LIST,
	NOTIFY_SIGNOFF_LIST,
	NOTIFY_SIGNON_LIST,
	NSLOOKUP_LIST,
	ODD_SERVER_STUFF_LIST,
	PASTE_LIST,
	PUBLIC_LIST,
	PUBLIC_AR_LIST,
	PUBLIC_MSG_LIST,
	PUBLIC_NOTICE_LIST,
	PUBLIC_OTHER_LIST,
	PUBLIC_OTHER_AR_LIST,
	RAW_IRC_LIST,
	REDIRECT_LIST,
	REPLY_AR_LIST,
	SAVEFILE_LIST,
	SAVEFILEPOST_LIST,
	SAVEFILEPRE_LIST,
	SEND_ACTION_LIST,
	SEND_CTCP_LIST,
	SEND_DCC_CHAT_LIST,
	SEND_MSG_LIST,
	SEND_NOTICE_LIST,
	SEND_PUBLIC_LIST,
	SEND_TO_SERVER_LIST,
	SERVER_NOTICE_FAKES_LIST,
	SERVER_NOTICE_FAKES_MYCHANNEL_LIST,
	SERVER_NOTICE_FOREIGN_KILL_LIST,
	SERVER_NOTICE_KILL_LIST,
	SERVER_NOTICE_LIST,
	SERVER_NOTICE_LOCAL_KILL_LIST,
	SERVER_NOTICE_SERVER_KILL_LIST,
	SET_LIST,
	SHITLIST_LIST,
	SHITLIST_FOOTER_LIST,
	SHITLIST_HEADER_LIST,
	SHOWIDLE_FOOTER_LIST,
	SHOWIDLE_HEADER_LIST,
	SHOWIDLE_LIST,
	SIGNOFF_LIST,
	SILENCE_LIST,
	SOCKET_LIST,
	SOCKET_NOTIFY_LIST,
	STAT_LIST,
	STAT_FOOTER_LIST,
	STAT_HEADER_LIST,
	STATUS_UPDATE_LIST,
	SWITCH_CHANNELS_LIST,
	TIMER_LIST,
	TIMER_HOUR_LIST,
	TOPIC_LIST,
	URLGRAB_LIST,
	USAGE_LIST,
	USERLIST_LIST,
	USERLIST_FOOTER_LIST,
	USERLIST_HEADER_LIST,
	USERS_LIST,
	USERS_FOOTER_LIST,
	USERS_HEADER_LIST,
	USERS_IP_LIST,
	USERS_SERVER_LIST,
	USERS_SERVER_HEADER_LIST,
	WALL_LIST,
	WALLOP_LIST,
	WATCH_LIST,
	WHO_LIST,
	WHOLEFT_LIST,
	WHOLEFT_FOOTER_LIST,
	WHOLEFT_HEADER_LIST,
	WIDELIST_LIST,
	WINDOW_LIST,
	WINDOW_CREATE_LIST,
	WINDOW_FOCUS_LIST,
	WINDOW_KILL_LIST,
	WINDOW_SWAP_LIST,
	YELL_LIST,
	ZZZ_ALWAYS_COMES_LAST_IN_THIS_LIST
};

#define NUMBER_OF_LISTS ZZZ_ALWAYS_COMES_LAST_IN_THIS_LIST

int             BX_do_hook (int, char *,...);
void            flush_on_hooks(void);
void            unload_on_hooks(char *);
BUILT_IN_COMMAND(shookcmd);
BUILT_IN_COMMAND(oncmd);
void            save_hooks(FILE *, int);
void            do_stack_on(int, char *);
extern HookFunc hook_functions[];

#endif                          /* __hook_h_ */
