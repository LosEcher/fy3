// Room: /d/kaifeng/jiaolou.c

inherit ROOM;

void create()
{
	set("short", "����¥");
	set("long", @LONG
��¥�ǽ��ڳ�ǽ֮�ϣ����ڱ��������Ĵ�����ֻ��¥�Ķ��˹���
һյ�������Ӵ�Զ����Զ��ɽˮ̨ͤ��һһ��Ŀ��������ȥ������
��֡����������˲��ϡ�
LONG
	);
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 2 */
  "eastdown" : __DIR__"zhuque",
  "westdown" : __DIR__"wroad2",
]));
	set("outdoors", "/d/kaifeng");

	setup();
	replace_program(ROOM);
}
