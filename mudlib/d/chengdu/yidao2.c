// Room: /d/chengdu/yidao2.c

inherit ROOM;

void create()
{
	set("short", "�����");
	set("long", @LONG
������һ����������Ĵ�����ϡ��������������������ӵ�
���̣����Ŵ󳵵�����Ͼ��Ͽ��������������������ǳ����֡�
��ʱ����������������߷ɳ۶���������һ·���������ϵ���
�������ž�װ���¼��������еĻ���������ŵ�������������Щ
Щϰ��Ľ����ˡ���·��������������������֡�
LONG
	);
	set("no_clean_up", 0);
	set("outdoors", "chengdu");
	set("exits", ([ /* sizeof() == 2 */
  "south" : "/d/huanhua/dalu1",
  "north" : __DIR__"yidao1",
]));

	setup();
	replace_program(ROOM);
}
