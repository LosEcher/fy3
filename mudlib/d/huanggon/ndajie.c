// Room: /d/huanggon/ndajie.c

inherit ROOM;

void create()
{
	set("short", "�����");
	set("long", @LONG
����ֺ�ᶫ��,�ӻʹ��ĺ��Ŵ���.�����ֵ�λ�ھ��ǵı���,����
����,��ס�Ķ���Щ�����.�������˶������ɫ,�˵����Ϲ�,���ǵ�����
������������.
LONG
	);
	set("objects", ([ /* sizeof() == 2 */
  "/d/taishan/npc/dao-ke.c" : 1,
  "/d/taishan/npc/jian-ke.c" : 1,
]));
	set("no_clean_up", 0);
	set("outdoors", "/d/huanggon");
	set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"wangfujing2",
  "west" : __DIR__"ndajie1",
]));

	setup();
	replace_program(ROOM);
}
