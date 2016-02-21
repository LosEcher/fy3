// Room: /d/quanzhou/nstreet3.c

inherit ROOM;

void create()
{
	set("short", "������");
	set("long", @LONG
��������Ȫ�ݸ������ֵĵط�,����������,������Ů��,�к���С 
��,��ȦΧ�ŵ�������ˣ��,ߺ������й����Ƥ����,�����Թ۵�Ѳ�� 
����,�����Ȫ�ݵ�����. 
LONG
	);
	set("no_clean_up", 0);
	set("outdoors", "/d/quanzhou");
	set("exits", ([ /* sizeof() == 3 */
  "north" : __DIR__"nstreet2",
  "east" : __DIR__"estreet1",
  "west" : __DIR__"wstreet1",
]));
	set("valid_startroom", 1);
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/yiren.c" : 1,
]));

	setup();
	replace_program(ROOM);
}
