// Room: /d/kaifeng/qianshou.c

inherit ROOM;

void create()
{
	set("short", "ǧ��ǧ�۷��");
	set("long", @LONG
��������й������ǧ��ǧ�۹�������˵���������ն�����������
��ǧ������ϸ��ȥ��ֻ��������������̶̵��ֱۣ�ÿ���������Ķ�
��ֻ�۾�����˼�Ǿ����㡺���۾��࣬ʲô����ע�⵽�����ֶ࣬ʲô
���ܹܵ����ɱ������¡���.
LONG
	);
	set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"fangsheng",
  "east" : __DIR__"houyuan",
]));
	set("no_clean_up", 0);
	set("objects", ([ /* sizeof() == 2 */
  __DIR__"npc/oldwomen.c" : 1,
  __DIR__"npc/obj/guanyin.c" : 1,
]));

	setup();
	replace_program(ROOM);
}
