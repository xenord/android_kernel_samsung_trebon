#ifndef _ASM_ARM_IDLE_H
#define _ASM_ARM_IDLE_H

#define IDLE_START 1
#define IDLE_END 2

struct notifier_block;
void idle_notifier_register(struct notifier_block *n);
void idle_notifier_unregister(struct notifier_block *n);

#ifdef CONFIG_ARM
void enter_idle(void);
void exit_idle(void);
#else /* !CONFIG_ARM */
static inline void enter_idle(void) { }
static inline void exit_idle(void) { }
#endif /* CONFIG_ARM */

void c1e_remove_cpu(int cpu);

#endif /* _ASM_ARM_IDLE_H */
