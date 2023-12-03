/* eslint-disable prettier/prettier */
import { TurboModule, TurboModuleRegistry } from 'react-native';

export interface Spec extends TurboModule {
    readonly reverseString: (input: string) => string;
    readonly doubleNumber: (input: number) => number;
}

export default TurboModuleRegistry.getEnforcing<Spec>(
    'NativeSampleModule'
);
