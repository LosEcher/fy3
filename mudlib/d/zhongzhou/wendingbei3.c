//wendingbei3
  

inherit ROOM;

void create()
{
	set("short", "�Ķ�����");
	set("long", @LONG
�������ݳ��Ķ����֣����Ľֵ������˲�������һ�����ֵ���
����������ݵ�Ѳ�������㲻���ӿ첽�������ֵط�������ȥΪ�
����һ�����ӣ��ſڵ���ֻʯʨ�ӳ�������۾����ſڻ���һֻ��
�ģ�ԭ����������ݵ������š�
LONG
	);
set("outdoors","/d/zhongzhou");

	set("exits", ([
		"east" : __DIR__"xunbu",
		"south" : __DIR__"wendingbei2",
		"west" : __DIR__"yamen",
		"north" : __DIR__"wendingbei4",
	]));
	set("objects",([
	"/d/hangzhou/npc/man":2,
	]));

	setup();
	replace_program(ROOM);
}

