//room: 
inherit ROOM;

void create()
{
  set("short","����");
  set("long",@LONG
���Ǹ�С����������������������Ž�׺������ԧ��˫˫�Զԣ�һ�߼�
ͷ������ʹ�˵�ƽ�����������������ʥ�õľӴ��������ǳ����������
�ǰ׻����ˣ���ҪС�ġ�
LONG );

  set("exits",([
      "north" : __DIR__"baihutang",
      "west"  : __DIR__"shenggu",
      "east"  :__DIR__"chufang2",
  ]));
  set("objects",([
      "/d/dali/npc/xianhe" : 4,
  ]));
//  set("no_clean_up", 0);
  setup();
  replace_program(ROOM);
}

