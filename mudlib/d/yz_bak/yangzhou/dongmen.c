// Room: /d/yangzhou/dongmen.c

inherit ROOM;

void create()
{
	set("short", "����");
	set("long", @LONG
	����������ݳǵĶ��ţ���������ݳǽ����е��˳�û����̫��ȫ��
����һ�����ϣ����žͻ�رա�

LONG
	);
	set("outdoors", "/d/yangzhou");
	set("objects", ([ /* sizeof() == 1 */
  "/d/quanzhou/npc/bing.c" : 2,
]));
	set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"jiedao3",
  "east" : "/d/jinling/to_yangzhou",
]));
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
