//room: didao6.c
inherit ROOM;

void create()
{
  set("short","�ص���ͷ");
  set("long",
	"\n"
        "�����ǰ��һ������ǰ���Ǳ��ж��죬ǰ������������԰��\n"
        "��֪��ʲô�ط���\n"
     );

  set("exits",([
      
      "south" : __DIR__"xiaohuayuan",
      "northdown" : __DIR__"didao4",
     ]));
   
 setup();
 replace_program(ROOM);
}