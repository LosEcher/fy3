// Room: /u/o/oldsix/room/hhy.c

inherit ROOM;

void create()
{
	set("short", "��԰");
	set("long", @LONG
԰����ֵ�Ÿ�ʽ�����Ļ��ݣ�����Ŀ��Ͼ�ӡ������������ŵĻ������㲻
�ɵþ���һ�����е�ƣ���·�һɨ���⡣��λ��������԰��С������Ĺ���
�š�
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
	"south" :__DIR__"xiaomen",
]));
	set("objects",([
		__DIR__"npc/huajiang":2,
]));
	set("no_clean_up", 0);
	set("outdoors","room");
	setup();
	replace_program(ROOM);
}
