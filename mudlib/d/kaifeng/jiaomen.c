// Room: /d/kaifeng/jiaomen.c

inherit ROOM;

void create()
{
	set("short", "С����");
	set("long", @LONG
��ǽ�Ǳ߿���һ��С�ţ������е�ɮ�˾ͽ����⡣��������ľ���ģ�
ԭ�ȵĺ����Ѿ�����ò���ˡ�һ�ߵ�Χǽ̣�˰�ߣ�Ѱ���˶���
���������ϱ���Ƭ�˵أ����˽���������֡�
LONG
	);
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/zhangsan.c" : 1,
]));
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"caidi5",
  "north" : __DIR__"eroad",
]));
	set("outdoors", "/d/kaifeng");

	setup();
	replace_program(ROOM);
}
