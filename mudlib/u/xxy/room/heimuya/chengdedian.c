//room: chengdedian.c
inherit ROOM;

void create()
{
  set("short","�ɵµ�");
  set("long",
	"�����������̽���ƽ�շ���ʩ��ĵط�, �����޴�, ��ڵ���\n"
        "���λε�����, ���˶˸���һ��, ����һ��Ӣ����������, ����\n"
        "���𽭺��Ķ������ܵ��ͷ����ͤ��!\n" 
     );

  set("exits",([
      "south" : __DIR__"huoting",
      "westdown":__DIR__"up4",
     ]));
  set("objects",([
		               __DIR__"npc/dizi" : 2,
                               __DIR__"npc/yang"    :1,
        ]));
  

 setup();
 replace_program(ROOM);
}