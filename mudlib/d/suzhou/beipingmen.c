// Room: /d/suzhou/beipingmen.c

inherit ROOM;

void create()
{
	set("short", "��ƽ��");
	set("long", @LONG
�����ש����ĳ�ǽ�����������٣�Ҳ��֪�����ж��ٸ���ͷ�ˡ��سǵı�
�²�������ĵ����㣬�ڴ��ǻ��Զ��׼�����ʲô���£���ӿ��˲�������·��
�����죬�����ǽ���֮·������������ϡ�ֳ���Ӱ��
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
		"south" :__DIR__"chengbeijie4",
		"north" :__DIR__"qingshiru1",
]));
	set("objects",([
	__DIR__"npc/bingyong" :2,
]));
	set("no_clean_up", 0);
	set("outdoors","suzhou");
	setup();
	replace_program(ROOM);
}
