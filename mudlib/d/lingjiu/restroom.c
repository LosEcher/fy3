// Room: /d/lingjiu/restroom.c

inherit ROOM;

void create()
{
	set("short", "���");
	set("long", @LONG
���������չ�����˯���ĵط���һ���ž��ŵ�һ�����Ƶ�������ֻ��
���е���һ֧�����,�յ���������,��������ɴ�����ӣ���ɫ�б�������
һֻ��ɫ�ķ�ˣ����Ϲ���һ��������Ůͼ������һ�ż��Ϲ���һ��������
������ͣ��һֻ�����ġ�
LONG
	);
	set("no_clean_up", 0);
	set("no_steal", 1);
	set("no_fight", 1);
	set("sleep_room", 1);
	set("exits", ([ /* sizeof() == 1 */
  "west" : __DIR__"changl3",
]));

	setup();
	replace_program(ROOM);
}
