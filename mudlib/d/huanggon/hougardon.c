// Room: /d/huanggon/hougardon.c

inherit ROOM;

void create()
{
	set("short", "��԰");
	set("long", @LONG
��԰��Ȼ�ıȽϿ�,С����ˮ,��ɽ����,��ľ�����ʯ����,
С�ɴ��������,��ֻ�������֦ͷһ��һ��,������ԧ��Զ�,ˮ�к�
���㻮��һ������Ӱ.��������ʯ��.
LONG
	);
	set("outdoors", "/d/huanggon");
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 3 */
  "east" : __DIR__"xiaogardon1",
  "south" : __DIR__"kangneiting",
  "west" : __DIR__"shiwu",
]));

	setup();
	replace_program(ROOM);
}
