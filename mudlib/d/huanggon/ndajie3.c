// Room: /d/huanggon/ndajie3.c

inherit ROOM;

void create()
{
	set("short", "�����");
	set("long", @LONG
����ֺ�ᶫ��,�ӻʹ��ĺ��Ŵ���.�����ֵ�λ�ھ��ǵı���,����
����,��ס�Ķ���Щ�����.�������˶������ɫ.�ֵ��ڴ�ת��,�����Ǿ�
���������Ľֵ���.
LONG
	);
	set("objects", ([ /* sizeof() == 1 */
  "/d/hangzhou/npc/man.c" : 2,
]));
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 2 */
  "east" : __DIR__"ndajie2",
  "south" : __DIR__"xidan",
]));
	set("outdoors", "/d/huanggon");

	setup();
	replace_program(ROOM);
}
