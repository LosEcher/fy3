// Room: /d/suzhou/chengdongjie2.c

inherit ROOM;

void create()
{
	set("short", "�Ƕ���");
	set("long", @LONG
���������������˺��٣����첻֪Ϊ�α�����լ�ſ�ӵ���˲��ٿ����ֵ���
�������Ǻô�һ��ׯԺ���������������ɫ���֡����ׯ�����ֵ��������򣬶�
�������ݸ��á������Ǹ�ԡ�ҡ�
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
	"north" :__DIR__"yushi",
		"south":__DIR__"jinfengzhuang",
		"west" :__DIR__"chengdongjie1",
		"east" :__DIR__"damen",
]));
	set("outdoors","suzhou");
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
