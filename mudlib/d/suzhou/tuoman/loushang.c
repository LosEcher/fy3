// Room: /d/suzhou/tuoman/loushang.c

inherit ROOM;

void create()
{
	set("short", "�ƽ�¥��");
	set("long", @LONG
ֻ��¥�ϳ��踻����һ�����û���ǿ�ȸ����������һ��ľ����д���ǣ�
    [1;32m��Ҷ�Ʋ��ܣ��軨ѩ����[2;37;0m
    �ּ�����Բ���ƺ�����һλ�����ŵ�����֮�֡�һλ����Ů�ӣ�����
���⸱���������ó���
LONG
	);
	set("objects",([
		__DIR__"npc/wangfuren":1,
]));
	set("exits", ([ /* sizeof() == 1 */
		"down":__DIR__"yjlou",
]));
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
