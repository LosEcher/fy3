// Room: /d/new/tianxia/incave5
#include <localtime.h>
inherit ROOM;
string *paths=({"southup","southdown","northwest","northeast","southeast","southwest","northdown","eastup","eastdown","westup","westdown","in"});

void create()
{
  set ("short", "���붴��");
  set ("long", @LONG
һ���߸ߵ�̨�״ӱ����һ��С�����������.ͷ����ɽ�ڸ�Լ����.��
������Ź��ӻ��Ƶľ޴�ʯ����������ɽ��.
LONG);

  setup();
}
void init()
{
  int where;
  mixed *local;
  local=localtime(time()*60);
  where=(local[LT_HOUR]+1)%24/2;
  set("exits",([
  "northup":__DIR__"incave4",
  paths[where]:__DIR__"danger"+where,
  ]));
 }