//guandimiao
  

inherit ROOM;

void create()
{
set("short","����");
	set("long", @LONG
����С���е�һ�����������Ƶ���שɢ���ڵ��£���ǽ����¶����
һ���������ѿ�������������ɫ�������л�����ɢ�������ſڡ�
LONG
	);

	set("exits", ([  
		"southeast" : __DIR__"xiaoxiang1",
				
"in":__DIR__"inpomiao",
	]));
	set("objects",([
		__DIR__"npc/xiaojiaohua":2,
		__DIR__"npc/laojiaohua":1,
	]));

	setup();
	replace_program(ROOM);
}

