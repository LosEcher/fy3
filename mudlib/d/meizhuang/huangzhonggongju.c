// Room: /d/suzhou/meizhuang/huangzhonggongju.c

inherit ROOM;

void create()
{
	set("short", "���ӹ���");
	set("long", @LONG
һ�����ڣ����ŵ�һ��̴�㡣�����ǽ���Ϲ���һ������ͨ����̣�
�����ϺõĴ�������̴ľ���϶�����һλ��ʮ��������ߣ��������
���ϼ��ⶼ���˽�ȥ��ֱ��һ�����á�һ������Сͯ�������ס�
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
	"enter":__DIR__"neishi",
	"south":__DIR__"chuangongfang4",
]));
	set("no_clean_up",0);
	set("objects",([
		__DIR__"npc/huangzhonggong":1,
		__DIR__"npc/qingyixiaotong":1,
]));
	setup();
	replace_program(ROOM);
}
