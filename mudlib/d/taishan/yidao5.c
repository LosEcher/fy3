// Room: /d/taishan/yidao5.c

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
	set("objects",([
		"/npc/man4":4,
	]));
	set("outdoors", "taishan");
	set("exits", ([ /* sizeof() == 2 */
  "northwest" : "/d/huanggon/road4",
  "southeast" : __DIR__"yidao4",
]));

	setup();
	replace_program(ROOM);
}
