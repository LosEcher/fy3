// Room: /d/kaifeng/yuhuang2.c

inherit ROOM;

void create()
{
	set("short", "��ʸ����");
	set("long", @LONG
��¥�д�ɨ�û���ɾ���������ʿ�Ƕ���������Ȼ�������⣬�����
����ͦ���صġ��˵ع�������𺺰������ʴ��������ϸ�壬�ƿ���
�������ܿ��������Ŀ���־���
LONG
	);
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/obj/yudixiang.c" : 1,
]));
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 1 */
  "down" : __DIR__"yuhuang",
]));

	setup();
	replace_program(ROOM);
}
