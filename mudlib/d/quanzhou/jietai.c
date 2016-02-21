// Room: /d/quanzhou/jietai.c

inherit ROOM;

void create()
{
	set("short", "��¶��̳");
	set("long", @LONG
����һ�����޲�ĸ�̳,�����弶,�Զ�����Ϊ'¬���Ƿ�','����'�� 
��,'���'��λ,'����'��λ,'�����������ͷ'��ʮ����,�������һ 
�ڸ�¶��,��˵��֮��ҩ,������Ч. 
LONG
	);
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 4 */
  "north" : __DIR__"dongta",
  "westup" : __DIR__"cangjinge",
  "eastdown" : __DIR__"daxiong",
  "south" : __DIR__"xita",
]));
	set("outdoors", "/d/quanzhou");
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"obj/foxiang.c" : 1,
]));

	setup();
	replace_program(ROOM);
}
