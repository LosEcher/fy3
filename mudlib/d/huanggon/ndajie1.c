// Room: /d/huanggon/ndajie1.c

inherit ROOM;

void create()
{
	set("short", "�����");
	set("long", @LONG
����ֺ�ᶫ��,�ӻʹ��ĺ��Ŵ���.�����ֵ�λ�ھ��ǵı���,����
����,��ס�Ķ���Щ�����.�������˶������ɫ.�ֵ������Ǽ���ׯ,���
���ڵ��д���ߺ������.
LONG
	);
	set("no_clean_up", 0);
	set("outdoors", "/d/huanggon");
	set("exits", ([ /* sizeof() == 3 */
  "east" : __DIR__"ndajie",
  "west" : __DIR__"guangchang1",
  "north" : __DIR__"qianrouzhuang",
]));

	setup();
	replace_program(ROOM);
}
