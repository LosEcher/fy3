// Room: /d/suzhou/canhe/huayuan.c

inherit ROOM;

void create()
{
	set("short", "��԰");
	set("long", @LONG
ֻ��԰���Ӳݴ��������Ǵ�԰�ķ��Ծá������ͷ����סӿ�𵭵��İ��
��̾Ӣ��ĺ�ա�������Ӳ��ڸ�֮�������ɼ�һ��С·��
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
		"north" :__DIR__"miru3",
		"south" :__DIR__"mudi",
]));
	set("outdoors","suzhou");
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
