// Room: /d/kaifeng/yuwangmiao.c

inherit ROOM;

void create()
{
	set("short", "������");
	set("long", @LONG
������Ϊ׷�������ˮ���£��ڴ�̨�Ͻ��죬���ڵĴ����������
ƽ����һ�����Ű����£�ĿעԶ�������˶�������Ī����ˮ�ģ�����
��ȥ����Ƭ���֡�
LONG
	);
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/obj/dayu.c" : 1,
]));
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 1 */
  "westdown" : __DIR__"yuwang",
]));

	setup();
	replace_program(ROOM);
}
