//xiyuan1
  

inherit ROOM;

void create()
{
	set("short", "�ݳ�����");
	set("long", @LONG
������Ǵ�����̨��������Ϸ�أ����������������һ���裬�ú�
����һ��Ʊ�ѡ�̨����λ��Ա�䲻�����ǣ�����Ϸ����Ҳ���а����ۣ�
�����������鲻��һ����żȻ�Ĳ����ʱ������ɢ��
LONG
	);
set("outdoors","/d/zhongzhou");

	set("exits", ([
		"east" : __DIR__"xiyuan",
		"west" : __DIR__"huazhuang",	
]));
	set("objects",([
		__DIR__"npc/guanzho":2,
	]));

	setup();
	replace_program(ROOM);
}

