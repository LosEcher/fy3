// Room: /d/huanggon/andingmen.c

inherit ROOM;

void create()
{
	set("short", "������");
	set("long", @LONG
�������Ǿ��ǵı���,���˰�����,����Į���Ŀຮ֮��,�ߴ�ĳ�¥.
�������˲�����,ֻ��һЩͼ����������,�ų����ŵ��ɹ�.�ϱ��ǵذ���
�㳡,�˳�����.
LONG
	);
	set("outdoors", "/d/huanggon");
	set("exits", ([ /* sizeof() == 2 */
  "north" : "/d/menggu/huanglu1",
  "south" : __DIR__"guangchang1",
]));
	set("no_clean_up", 0);
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/chengweibin.c" : 2,
]));

	setup();
	replace_program(ROOM);
}
