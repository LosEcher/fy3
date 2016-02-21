// Room: /u/xizhen/room/sanqingdian.c

inherit ROOM;

void create()
{
	set("short", "�����");
	set("long", @LONG
	���������������������䵱�ɻ�͵ĵص㡣����Ԫʼ����̫�ϵ�
���������Ͼ��������㰸���������ơ���ǽ���ż���̫ʦ�Σ����Ϸ��ż�����
�š��������������ȣ��ϱ�������Ĺ㳡�������Ǻ�Ժ��
LONG
	);
	set("no_clean_up", 0);
	set("objects", ([ /* sizeof() == 2 */
  __DIR__"npc/song" : 1,
  __DIR__"npc/guxu" : 1,
]));
	set("exits", ([ /* sizeof() == 3 */
  "west" : __DIR__"xiuxishi",
  "east" : __DIR__"chufang",
  "south" : __DIR__"guangchang",
]));
	set("valid_startroom", 1);

	setup();
"/obj/board/wudangboard"->foo();
}

int valid_leave(object me,string dir)
{
	string fam;

	fam=(string)me->query("family/family_name");
	if( fam !="�䵱��" && (dir=="east" || dir=="west"))
		return notify_fail("�㲻���䵱���ӣ����ܽ�ȥ��\n");
	return ::valid_leave(me,dir);
}
