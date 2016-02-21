// Room: /d/kaifeng/wroad2.c

inherit ROOM;

void create()
{
	set("short", "�����");
	set("long", @LONG
���⸮���������Ҫ��ͨҪ�����ֵ����ߵ������������˳�������
�̷���ߺ�ȣ�������С�����ּۻ��ۣ������ޱȡ������������ۣ���
������ϵ���¥��
LONG
	);
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/qigai.c" : 1,
]));
	set("outdoors", "/d/kaifeng");
	set("exits", ([ /* sizeof() == 4 */
  "eastup" : __DIR__"jiaolou",
  "west" : __DIR__"yanqing",
  "north" : __DIR__"wroad3",
  "south" : __DIR__"wroad1",
]));
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
