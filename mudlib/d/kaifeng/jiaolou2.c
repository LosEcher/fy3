// Room: /d/kaifeng/jiaolou2.c

inherit ROOM;

void create()
{
	set("short", "����¥");
	set("long", @LONG
��¥��ƽ��פ���������ĵط���ֻ��¥�Ķ��˹��˸�������ơ�
��ҹ����ֵ�ء��Ӵ�����������ȸ�ţ������Ƕ���֣�����ĿԶ����
������¥�����Ǵ�ý�ɽ��
LONG
	);
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 2 */
  "westdown" : __DIR__"zhuque",
  "eastdown" : __DIR__"eroad2",
]));
	set("outdoors", "/d/kaifeng");

	setup();
	replace_program(ROOM);
}
