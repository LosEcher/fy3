// Room: /d/kaifeng/xianguosi.c

inherit ROOM;

void create()
{
	set("short", "�������");
	set("long", @LONG
�������ռ��500��Ķ��Ͻ64��������Ժ����ɮǧ�ࡣ�Ǿ������
����Ժ��ȫ����̻���ġ���ǰ��������¡����Ҷ����ǵ�������
���顣���ų�������������������
LONG
	);
set("valid_startroom",1);
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/zhike.c" : 1,
]));
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"qianyuan",
  "south" : __DIR__"jiedao",
]));
	set("outdoors", "/d/kaifeng");

	setup();
	replace_program(ROOM);
}
