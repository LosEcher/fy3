// Room: /d/quanzhou/wstreet2.c

inherit ROOM;

void create()
{
	set("short", "����");
	set("long", @LONG
������Ȫ�ݵ�����,�ֵ����ߵķ��Ӷ��ȽϹ���.����Ǹ������,��
ȻҲ�в������,��ֵ���,������˸첲�¼��Ű��������ֱ���һ������
LONG
	);
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 3 */
  "east" : __DIR__"wstreet1",
  "west" : __DIR__"wstreet3",
  "north" : __DIR__"dangpu",
]));
	set("outdoors", "/d/quanzhou");

	setup();
	replace_program(ROOM);
}
