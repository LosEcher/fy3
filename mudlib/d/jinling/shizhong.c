// Room: /d/jinling/shizhong.c

inherit ROOM;

void create()
{
	set("short", "������");
	set("long", @LONG
��Ȼ������һ���ܴ�Ĺ㳡���㳡������һ���ʾ��(gaoshi),�Ա��м�
���������ţ�����㳡�ϼ���û�ˣ���������ϳ����ֵ�����������һ��
��ջ������ȥͦ�����ģ�
LONG
	);
set("valid_startroom",1);
	set("no_clean_up", 0);
	set("item_desc", ([ /* sizeof() == 1 */
  "gaoshi" : "[1;33m���ڰ���˽�������Ű��ա�Ϊ�˴�ҵİ�ȫ����ʵ��������
��������ϲ�Ҫ���ţ�лл����!! 
[2;37;0m",
]));
	set("outdoors", "/d/jingling");
	set("exits", ([ /* sizeof() == 5 */
  "north" : __DIR__"changjie3.c",
  "southeast" : __DIR__"ke.c",
  "south" : __DIR__"changjie2.c",
  "east" : __DIR__"shanglin7.c",
  "west" : __DIR__"shanglin1.c",
]));
	set("objects", ([ /* sizeof() == 2 */
  __DIR__"npc/chengwei.c" : 4,
  __DIR__"npc/yinjiaweishi.c" : 2,
]));

	setup();
	replace_program(ROOM);
}
