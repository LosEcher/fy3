// ROOM : xuanya.c
inherit ROOM;
void create()
{
  set("short","����");
  set("long",
      "�������߳�����Ƭ�����ɭ��, ���ɳ��������˿���. ����, һ��\n"
      "���͵������������������ǰ. �����Ϸ·�������ɫ�Ľ���. ����\n"
      "�����ƿ�������. �������ϴ���һ������(rope). ����ȥ����\n"
      "�������»�ͨ��Ϣ�Ĺ���.\n " 
     );
  set("exits",([      
      "west"  : __DIR__"linjxd6",
     ]));
 setup();
 replace_program(ROOM);
}
