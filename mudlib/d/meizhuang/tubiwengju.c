// Room: /d/suzhou/meizhuang/tubiwengju.c

inherit ROOM;

void create()
{
	set("short", "ͺ���̾�");
	set("long", @LONG
�����ڹ��������ҵ��漣��ͺ������شӴ�������˲�����ʽ������
���ǽ���ϲ�֪����λ���˲���ġ��Ὣ��ʫ������ʮ�����ֱʱʾ���
���������Ǹ����硱��ֱ���Ʊڷ�ȥһ�㡣
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
	"west":__DIR__"chuangongfang2",
]));
	set("objects",([
	__DIR__"npc/tubiweng":1,
]));
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
