#include <ansi.h>
inherit NPC;
string *menpai=({"�䵱��","��ü��","�㵴��","����","����Ľ��","��ڤ��",
"�Ϻ�����","佻�����","����һ�ҵ�","Ұ��կ","÷ׯ","������"});
#include "bangzhu.h"
void create()
{
        set_name("�����", ({ "li","li chengzhou"}));
            set("gender", "����" );
        set("title","Ȩ�������");
        set("age", 25+random(10));
        set("banghui","Ȩ����");
        set("combat_exp", 600+random(400));
        set("attitude", "friendly");
        set_skill("dodge", 10);
        set_skill("unarmed", 10);
        set("inquiry",([
                  "���":(:ask_jiaru:),
                  "����":(:ask_jiaru:),
                  "jiaru":(:ask_jiaru:),
                  "join":(:ask_jiaru:),
                  "Ȩ����":"��Ȩ�����˶�����,��������!\n",
                  "rank":(:re_rank:),
                  "renwu":(:ask_renwu:),
        ]));
  enable_commands();
        setup();
carry_object("/obj/armor/cloth")->wear();
        add_money("coin", 30+random(20));
}
string check_player()
{
   int num;
   (int)num=ob->query("combat_exp");
   if (num<10000) return "����";
   if (num<50000) return "������";
   if (num<100000) return "����";
   if (num<200000) return "��̳��";
   if (num<300000) return "̳��";
   if (num<500000) return "������";
  if (num<800000) return "����";
  if (num<1000000) return "����";
  if (num<1200000) return "�ܻ���";
  if (num<1400000) return "��ħ";
  if (num<1600000) return "��ħ";
  if (num<1800000) return "��ħ";
  else return "��ħ";
 return;
}
