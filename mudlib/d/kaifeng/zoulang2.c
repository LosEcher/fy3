// Room: /d/kaifeng/zoulang2.c

inherit ROOM;

void create()
{
	set("short", "����");
	set("long", @LONG
�������̵�һ�����ȣ�����ĵذ��뿪�������ߣ���ϴ�úܸɾ���ÿ
��һ�ε��ȼ��϶��ο��˷������������жϣ������ȥ���ǲ�԰����
�ߵĿյ���Ҳ���˼��òˡ������Ǹ�С�񷿡�
LONG
	);
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 4 */
  "west" : __DIR__"zoulang",
  "east" : __DIR__"caidi",
  "south" : __DIR__"caidi2",
  "north" : __DIR__"caifang",
]));
	set("outdoors", "/d/kaifeng");

	setup();
	replace_program(ROOM);
}
