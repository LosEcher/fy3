//xiuxishi
  

inherit ROOM;

void create()
{
	set("short","������");
	set("long", @LONG
����ǡ���Ѫ�����������¹����ң����ǽ�������Щʲô�紵�ݶ�
�ı仯���㶼�����ڴ˵õ���һ�ֵ����ϡ�
LONG
	);
	set("no_fight", 1);

	set("exits", ([
		"west":__DIR__"yinghaoup",
		
	]));

	setup();
	"/obj/board/gonggao"->foo();
}

