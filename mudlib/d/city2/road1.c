
inherit ROOM;

void create()
{
	set("short", "�����");
	set("long", @LONG
������һ����������Ĵ�����ϡ��������������������ӵġ�
���̵ġ����Ŵ󳵵�����Ͼ��Ͽ��������������������ǳ����֡�
��ʱ����������������߷ɳ۶���������һ·��������·������
��������������֡����߾��Ǿ��Ƕ��š������Ĺٵ�ֱͨ���⡣��
���Ǹ����ۡ�
LONG );
	set("exits", ([
		"north"	:__DIR__"guandao1",
		"east"      : __DIR__"road10",
		"west"      : __DIR__"dongmen",
		"southeast" : __DIR__"road2",
	]));

	set("objects",([
		"/d/taishan/npc/tiao-fu" : 1,
	]));

 	set("outdoors", "city2");
//	set("no_clean_up", 0);
	setup();
	replace_program(ROOM);
}



